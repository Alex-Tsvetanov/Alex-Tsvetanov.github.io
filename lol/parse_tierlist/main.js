const jsdom = require("jsdom");
const { JSDOM } = jsdom;
const fs = require('fs');

const tierlist = new JSDOM(fs.readFileSync('tierlist.html', 'utf8'));
const labels = Array.from(tierlist.window.document.getElementsByClassName('label')).map((x) => x.innerHTML);
const tiers = Array.from(tierlist.window.document.getElementsByClassName('tier'));
const colors = [];

let script = "";
let table = `
<style>
body { color: white; background-color: black; }
th { font-size: 100px; color: black; }
img { width: 100px; height: 100px; }
</style>
<table>`;

tiers.forEach((tier, i) => {
    const prefix = "url(/images/chart/chart/all-league-of-legends-champions-up-to-nilah-15169358/", suffix = ")", host = "https://tiermaker.com";
    const wgets = Array.from(tier.getElementsByClassName("character")).map((x) => {
        const bg = x.style._values['background-image'];
        return "curl " + host + bg.substring(4, bg.length - 1) + " > " + bg.substring(prefix.length, bg.length - suffix.length) + ";\n";
    });
    const champions = Array.from(tier.getElementsByClassName("character")).map((x) => x.style._values['background-image'].substring(prefix.length, x.style._values['background-image'].length - suffix.length));
    console.log(labels[i], champions, wgets);
    script += wgets.join("\n");
    table += `
        <tr>
            <th style="background-color: ${color[i]};">${labels[i]}<th>
            <td>
                ${champions.map((x) => '<img src="./' + x + '">').join('')}
            </td>
        </tr>
    `;
});

table += "</table>"

fs.writeFile('./tierlist/init.sh', script, err => {
    if (err) {
        console.error(err);
    }
    // file written successfully
});
fs.writeFile('./tierlist/index.html', table, err => {
    if (err) {
        console.error(err);
    }
    // file written successfully
});