#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#define pd 1000000
using namespace std;
bool used[2000000];
int n,a[1000],br;
vector<int> sums;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    sums.push_back(a[0]);
    used[a[0]+pd]=1;
    br=1;
    for(int i=1; i<n; i++)
    {
        int l=sums.size();
        for(int j=0; j<l; j++)
            if(used[a[i]+pd+sums[j]]==0)
            {
                sums.push_back(a[i]+sums[j]);
                used[a[i]+pd+sums[j]]=1;
                br++;
            }
        if(used[a[i]+pd]==0)
        {
            sums.push_back(a[i]);
            used[a[i]+pd]=1;
            br++;
        }
    }
    cout<<br<<endl;
    return 0;
}
/**
1000
918 -591 -449 36 -280 946 -111 463 683 -780 542 286 -139 -399 -58 -567 -561 -449 -104 -164 248 -304 -160 -681 346 -26 35 26 910 411 -664 512 -100 320 -614 729 438 -364 235 109 -891 808 -613 -339 995 -592 986 -4 -597 -116 42 14 494 616 -952 -737 776 -223 -276 871 258 169 142 941 -887 61 -756 426 -306 -571 -726 448 223 635 -615 -949 -617 800 939 374 434 -53 534 -224 -365 -717 343 192 -727 464 -503 23 847 -435 -203 774 -509 -752 396 272 -822 -244 900 449 706 -537 -17 -18 631 680 514 15 842 -396 -956 923 159 265 982 227 -26 -646 50 -719 -67 -516 -170 -78 -812 -80 755 258 641 -445 -735 -153 148 -830 662 -703 -355 690 -249 -400 -147 766 189 566 -917 98 780 878 -72 -344 -512 -242 -396 321 -279 -471 35 167 -664 152 -102 960 -918 234 591 -475 -619 377 -768 -28 -591 -337 -558 3 -775 -567 -675 822 -190 -341 -299 930 91 -124 317 -797 -187 596 -153 267 868 -197 671 -852 551 435 825 648 741 -80 728 -361 -423 -489 -736 -999 47 493 -434 -788 -833 -830 775 -912 10 605 590 761 402 122 -342 85 -49 -398 -329 -737 -337 665 -676 -989 -322 -835 301 -926 -938 -467 961 569 -808 25 391 -451 972 9 -619 -71 -730 225 -991 -404 345 499 -285 -931 -944 485 282 -48 667 372 542 973 839 201 -745 863 1 -645 -148 -902 140 -843 910 81 -864 170 198 375 -394 326 -708 580 754 -953 -822 90 -400 -532 -816 -631 834 861 -615 -752 -488 587 958 628 -751 -472 777 870 706 -742 141 96 293 -660 356 464 -141 -490 457 553 532 -449 -505 374 -362 -656 -111 96 -3 -566 -796 -334 858 267 74 -806 223 301 720 51 882 79 858 -686 -832 -632 198 -947 276 761 -882 -910 72 -814 -974 727 331 984 741 62 707 790 103 716 -555 961 -829 425 -637 -223 -583 394 69 844 -257 -274 443 -667 52 -42 -254 -699 -507 41 -907 825 579 614 550 -963 -779 -677 77 550 -902 933 16 934 -655 -615 -172 -404 285 -461 307 394 3 829 894 171 390 -493 -667 -332 -907 -12 804 266 946 -917 -496 997 -201 -722 -525 36 -811 279 420 -239 61 -590 -357 -282 258 -522 -957 -656 -786 855 -751 818 740 987 -796 -755 566 716 669 -529 904 -162 -655 -630 388 993 828 727 -640 -936 -552 330 845 -965 15 -360 -351 -677 -402 -378 552 4 -438 67 774 -265 -761 425 624 -183 711 864 907 934 -368 740 -571 570 17 568 -493 -815 229 -694 362 -931 249 -55 -941 73 -533 -299 488 -20 -620 -523 148 511 888 -321 -725 82 -790 -204 -140 12 261 -999 -576 850 249 893 -490 -806 371 968 -963 593 368 449 -2 -919 19 131 -136 758 805 -303 966 891 76 -745 -801 -191 -528 -989 -580 -632 73 -173 783 -127 -243 737 -767 763 -183 -164 -804 -884 189 -871 -37 -717 797 -758 -416 -484 661 606 -684 -893 -930 -982 68 28 590 -283 921 418 -684 970 -792 -513 -972 825 220 -84 688 511 -303 -343 -680 -344 899 -193 754 674 918 -300 -130 -220 967 975 -924 302 226 508 -849 51 917 162 877 -44 469 739 -425 -721 0 -972 975 904 531 -962 -376 630 -35 -171 -822 146 -333 727 533 -581 -331 966 -362 61 -223 -711 296 307 -825 -512 749 -69 -531 -585 702 -86 -989 365 846 239 -247 981 -779 44 304 -820 -932 -78 -465 -484 -379 956 391 -863 -451 -209 -39 -389 660 -288 678 -829 636 -490 407 -431 432 -990 -17 -691 -121 -483 253 -220 793 -111 -26 45 -703 -726 -478 -739 51 -786 -218 -568 -367 763 851 -247 665 -49 -372 804 113 -306 -147 -6 885 -528 -214 -403 752 -951 518 -604 505 13 550 -272 144 -909 -539 816 -694 -519 -759 147 -39 329 581 -803 -705 874 -864 -597 -604 954 438 -550 902 667 46 84 321 459 -900 365 -912 728 -248 -115 530 36 -450 -385 656 -794 -921 -71 941 -847 888 925 719 -280 602 800 -658 146 858 968 -117 891 834 -484 -381 -549 151 886 756 43 820 -404 14 85 55 -944 -675 -4 -870 852 -841 444 -427 194 -31 498 338 715 -249 -97 -287 782 -517 601 -99 987 14 738 -577 200 285 125 -94 -779 333 527 -698 -261 -598 -77 -631 570 -163 -47 -429 691 796 303 -896 -477 -474 -137 -637 930 -385 -53 521 -54 585 -889 -36 284 -60 -697 682 -689 -905 425 757 538 159 -781 -709 324 839 -24 345 -86 745 -537 412 881 -252 52 72 -115 -17 12 877 -271 748 -93 -42 -920 -223 -864 -268 -765 83 923 -821 595 963 -187 842 10 206 425 497 557 -385 466 222 -595 600 -498 633 391 82 801 -863 792 -367 541 886 -428 107 -192 856 -215 186 478 927 256 -561 560 877 644 -150 685 -78 822 -233 729 942 -241 -21 -212 204 -73 -336 -748 685 -826 701 205 -174 -822 570 735 -162 -199 467 -679 -37 -633 698 -291 540 361 -910 524 883 -357 -183 131 197 -737 885 -666 778 -521 -30 -4 -647 341 363 171 691 -416 -8 -42 911 778 166 996 -458 -719 -355 -493 -881 114 654 -820 942 228 -132 -55 -407 -412 -275 340 -820 -771 -432 -942


10
568 271 -785 293 -922 118 201 -199 257 960
*/
