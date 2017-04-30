#include <iostream>
#include <vector>
#include <string>
#include <list>
 
#include <limits> // for numeric_limits
 
#include <set>
#include <utility> // for pair
#include <algorithm>
#include <iterator>

using namespace std;
 
typedef int vertex_t;
typedef int weight_t;
 
const weight_t max_weight = std::numeric_limits<int>::max();
 
struct neighbor {
    vertex_t target;
    weight_t weight;
    neighbor(vertex_t arg_target, weight_t arg_weight)
        : target(arg_target), weight(arg_weight) { }
};
 
typedef std::vector<std::vector<neighbor> > adjacency_list_t;
 
 
void DijkstraComputePaths(vertex_t source,
                          const adjacency_list_t &adjacency_list,
                          std::vector<weight_t> &min_distance,
                          std::vector<vertex_t> &previous)
{
    int n = adjacency_list.size();
    min_distance.clear();
    min_distance.resize(n, max_weight);
    min_distance[source] = 0;
    previous.clear();
    previous.resize(n, -1);
    std::set<std::pair<weight_t, vertex_t> > vertex_queue;
    vertex_queue.insert(std::make_pair(min_distance[source], source));
 
    while (!vertex_queue.empty()) 
    {
        weight_t dist = vertex_queue.begin()->first;
        vertex_t u = vertex_queue.begin()->second;
        vertex_queue.erase(vertex_queue.begin());
 
        // Visit each edge exiting u
		const std::vector<neighbor> &neighbors = adjacency_list[u];
        for (std::vector<neighbor>::const_iterator neighbor_iter = neighbors.begin();
             neighbor_iter != neighbors.end();
             neighbor_iter++)
        {
            vertex_t v = neighbor_iter->target;
            weight_t weight = neighbor_iter->weight;
            weight_t distance_through_u = dist + weight;
			
			if (distance_through_u < min_distance[v]) {
				vertex_queue.erase(std::make_pair(min_distance[v], v));
	 
				min_distance[v] = distance_through_u;
				previous[v] = u;
				vertex_queue.insert(std::make_pair(min_distance[v], v));
	 
			}
        }
    }
}
 
 
std::list<vertex_t> DijkstraGetShortestPathTo(
    vertex_t vertex, const std::vector<vertex_t> &previous)
{
    std::list<vertex_t> path;
    for ( ; vertex != -1; vertex = previous[vertex])
        path.push_front(vertex);
    return path;
}
 
char matrix [1024][1024];
int n, m;

int get_vertex (int y, int x)
{
	return y * m + x;
}
 
int main()
{
	std::cin.tie (nullptr);
	std::ios::sync_with_stdio(false);
	std::cin >> n >> m;
    int myY, myX;
    adjacency_list_t adjacency_list(n * m);
    for (int i = 0 ; i < n ; i ++)
    {
		std::string bla;
		std::cin >> bla;
        for (int j = 0 ; j < m ; j ++)
        {
            char a = bla [j];
            if (a == '*')
            {
            }
            else
			{
				if (a == '#')
				{
					myY = i;
					myX = j;
					if (matrix [i - 1][j] != '*')
					{
						adjacency_list [get_vertex (i, j)].push_back (neighbor (get_vertex (i - 1, j), matrix [i - 1][j] - 'A' + 1));
					}
					if (matrix [i][j - 1] != '*')
					{
						adjacency_list [get_vertex (i, j)].push_back (neighbor (get_vertex (i, j - 1), matrix [i][j - 1] - 'A' + 1));
					}
				}
				else 
				{
					if (i > 0 and matrix [i - 1][j] != '*' and matrix [i - 1][j] != '#')
					{
						adjacency_list [get_vertex (i - 1, j)].push_back (neighbor (get_vertex (i, j), a - 'A' + 1));
						adjacency_list [get_vertex (i, j)].push_back (neighbor (get_vertex (i - 1, j), matrix [i - 1][j] - 'A' + 1));
					}
					if (j > 0 and matrix [i][j - 1] != '*' and matrix [i][j - 1] != '#')
					{
						adjacency_list [get_vertex (i, j - 1)].push_back (neighbor (get_vertex (i, j), a - 'A' + 1));
						adjacency_list [get_vertex (i, j)].push_back (neighbor (get_vertex (i, j - 1), matrix [i][j - 1] - 'A' + 1));
					}
					if (i > 0 and matrix [i - 1][j] != '*' and matrix [i - 1][j] == '#')
					{
						adjacency_list [get_vertex (i - 1, j)].push_back (neighbor (get_vertex (i, j), a - 'A' + 1));
					}
					if (j > 0 and matrix [i][j - 1] != '*' and matrix [i][j - 1] == '#')
					{
						adjacency_list [get_vertex (i, j - 1)].push_back (neighbor (get_vertex (i, j), a - 'A' + 1));
					}
				}
			}
			matrix [i][j] = a;
        }
    }

	//for (auto& x : adjacency_list [38])
	//	cout << x.target << " " << x.weight << endl;

	//for (auto& x : adjacency_list [54])
	//	cout << x.target << " " << x.weight << endl;
    
	std::vector<weight_t> min_distance;
    std::vector<vertex_t> previous;
    DijkstraComputePaths(get_vertex(myY, myX), adjacency_list, min_distance, previous);
	int ans = max_weight;
    for (int i = 0 ; i < n ; i ++)
    {
        int val = min_distance [get_vertex (i, 0)];
	//	cout << get_vertex (i, 0) << " " << val << endl;
		ans = std::min (ans, val);
    }
    for (int i = 0 ; i < n ; i ++)
    {
        int val = min_distance [get_vertex (i, m - 1)];
	//	cout << get_vertex (i, m - 1) << " " << val << endl;
		ans = std::min (ans, val);
    }
    for (int i = 0 ; i < m ; i ++)
    {
        int val = min_distance [get_vertex (0, i)];
	//	cout << get_vertex (0, i) << " " << val << endl;
		ans = std::min (ans, val);
    }
    for (int i = 0 ; i < m ; i ++)
    {
        int val = min_distance [get_vertex (n - 1, i)];
	//	cout << get_vertex (n - 1, i) << " " << val << endl;
		ans = std::min (ans, val);
    }

	std::cout << ans << "\n";
 
    return 0;
}
/**********************************************************
#include <iostream>
#include <queue>

using namespace std;

const int max_val = 641*641*28;

char matrix [1024][1024];
int map [1024][1024];
bool visited [1024][1024];

bool is_wall (int x, int y)
{
	return matrix [y][x] == '*';
}

bool is_me (int x, int y)
{
	return matrix [y][x] == '#';
}

int price (int x, int y)
{
	return matrix [y][x] - 'A' + 1;
}

int optimal = -1;

int n, m;

int dx [] = {0, 0, 1, -1};
int dy [] = {1, -1, 0, 0};
int dist [1024][1024];

void dijkstra (int x, int y, int useless)
{
    for (int i = 0 ; i < n ; i ++)
        for (int j = 0 ; j < m ; j ++)
            dist [i][j] = max_val;
    ///                     Dist         X    Y
    priority_queue < pair < int, pair < int, int > > > q;
    q.push (make_pair (0, make_pair (x, y)));
    while (!q.empty ())
    {
        pair < int, pair < int, int > > top = q.top (); q.pop ();
        if (dist [top.second.second][top.second.first] < top.first)
            continue;
        dist [top.second.second][top.second.first] = top.first;
        visited [top.second.second][top.second.first] = true;
        for (int i = 0 ; i < 4 ; i ++)
        {
            int new_x = top.second.first + dx [i];
            int new_y = top.second.second + dy [i];
            if (new_x < 0 or new_x >= m or new_y < 0 or new_y >= n)
                continue;
            if (not visited [new_y][new_x] and not is_wall (new_x, new_y) and not is_me (new_x, new_y))
            {
				if (dist [new_y][new_x] > top.first + price (new_x, new_y))
					q.push (make_pair(top.first + price (new_x, new_y), make_pair(new_x, new_y)));
            }
        }
    }
    int ans = 0;
    for (int i = 0 ; i < n ; i ++)
    {
        if (matrix [i][0]) continue;
        int val = dist [i][0];
        if (ans == 0)
            ans = val;
        else
            ans = min (ans, val);
    }
    for (int i = 0 ; i < n ; i ++)
    {
        if (matrix [i][m - 1]) continue;
        int val = dist [i][m - 1];
        if (ans == 0)
            ans = val;
        else
            ans = min (ans, val);
    }
    for (int i = 0 ; i < m ; i ++)
    {
        if (matrix [0][i]) continue;
        int val = dist [0][i];
        if (ans == 0)
            ans = val;
        else
            ans = min (ans, val);
    }
    for (int i = 0 ; i < m ; i ++)
    {
        if (matrix [n - 1][i]) continue;
        int val = dist [n - 1][i];
        if (ans == 0)
            ans = val;
        else
            ans = min (ans, val);
    }
    optimal = ans;
}

int main ()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    int myY, myX;
    for (int i = 0 ; i < n ; i ++)
    {
        string bla;
        cin >> bla;
        for (int j = 0 ; j < m ; j ++)
        {
            char a = bla [j];
            if (a == '*')
            {
                map [i][j] = 0;
            }
            else if (a == '#')
            {
                myY = i;
                myX = j;
                map [i][j] = 0;
            }
            else
                map [i][j] = a - 'A' + 1;
			matrix [i][j] = a;
        }
    }
    dijkstra(myX, myY, 0);
    cout << optimal << "\n";
}

8 12
NY****AZ****
*SH*D**CHMW*
*CJ**G**LZO*
*JMS****NGG*
*JKPKN#YORC*
************
KJWWGDPLQMXL
TGLAKBQCRQSD

******************************************************/
