Name  : Jia Nan Mai
Date  : April 25, 2018
Class : CSC 415

Compile Instructions: gcc pandc.c -pthread


Run Instructions: ./a.out 7 5 3 15 1 1


Project Description:
N = 7 P = 5 C = 3 X = 15 Ptime = 1 Ctime = 1
Current time: Wed Apr 25 23:55:31 2018

     1 was produced by producer->        1
Producer Thread joined:  1
     2 was produced by producer->        1
     3 was produced by producer->        1
    46 was produced by producer->        4
    61 was produced by producer->        5
    16 was produced by producer->        2
     1 was consumed by consumer->        1
    31 was produced by producer->        3
     2 was consumed by consumer->        2
    47 was produced by producer->        4
     4 was produced by producer->        1
     3 was consumed by consumer->        1
    62 was produced by producer->        5
    46 was consumed by consumer->        3
    61 was consumed by consumer->        3
    16 was consumed by consumer->        3
    31 was consumed by consumer->        3
    47 was consumed by consumer->        3
    32 was produced by producer->        3
     4 was consumed by consumer->        2
    48 was produced by producer->        4
    62 was consumed by consumer->        1
    17 was produced by producer->        2
    32 was consumed by consumer->        1
    18 was produced by producer->        2
    48 was consumed by consumer->        1
    33 was produced by producer->        3
    17 was consumed by consumer->        1
    49 was produced by producer->        4
    18 was consumed by consumer->        1
    50 was produced by producer->        4
    33 was consumed by consumer->        1
    19 was produced by producer->        2
    49 was consumed by consumer->        2
    34 was produced by producer->        3
    50 was consumed by consumer->        2
    35 was produced by producer->        3
    19 was consumed by consumer->        2
    51 was produced by producer->        4
    34 was consumed by consumer->        1
    20 was produced by producer->        2
    35 was consumed by consumer->        1
    21 was produced by producer->        2
    51 was consumed by consumer->        1
    36 was produced by producer->        3
    20 was consumed by consumer->        2
    52 was produced by producer->        4
    21 was consumed by consumer->        2
    53 was produced by producer->        4
    36 was consumed by consumer->        2
    22 was produced by producer->        2
    52 was consumed by consumer->        1
    37 was produced by producer->        3
    53 was consumed by consumer->        1
    38 was produced by producer->        3
    22 was consumed by consumer->        1
    54 was produced by producer->        4
    37 was consumed by consumer->        2
    23 was produced by producer->        2
    38 was consumed by consumer->        2
    24 was produced by producer->        2
    54 was consumed by consumer->        2
    39 was produced by producer->        3
    23 was consumed by consumer->        1
    55 was produced by producer->        4
    24 was consumed by consumer->        1
    56 was produced by producer->        4
    39 was consumed by consumer->        1
    25 was produced by producer->        2
    55 was consumed by consumer->        2
    40 was produced by producer->        3
    56 was consumed by consumer->        2
    41 was produced by producer->        3
    25 was consumed by consumer->        2
    57 was produced by producer->        4
    40 was consumed by consumer->        1
    26 was produced by producer->        2
    41 was consumed by consumer->        1
    27 was produced by producer->        2
    57 was consumed by consumer->        1
    42 was produced by producer->        3
    26 was consumed by consumer->        2
    58 was produced by producer->        4
    27 was consumed by consumer->        2
    59 was produced by producer->        4
    42 was consumed by consumer->        3
    28 was produced by producer->        2
    58 was consumed by consumer->        1
    43 was produced by producer->        3
    59 was consumed by consumer->        1
    44 was produced by producer->        3
    28 was consumed by consumer->        2
    60 was produced by producer->        4
    43 was consumed by consumer->        3
    29 was produced by producer->        2
    30 was produced by producer->        2
    63 was produced by producer->        5
    44 was consumed by consumer->        1
    60 was consumed by consumer->        1
    29 was consumed by consumer->        1
     5 was produced by producer->        1
     6 was produced by producer->        1
     7 was produced by producer->        1
    64 was produced by producer->        5
    30 was consumed by consumer->        2
    63 was consumed by consumer->        2
     5 was consumed by consumer->        2
     6 was consumed by consumer->        2
     7 was consumed by consumer->        2
    45 was produced by producer->        3
    64 was consumed by consumer->        2
    45 was consumed by consumer->        3
     8 was produced by producer->        1
     9 was produced by producer->        1
    10 was produced by producer->        1
    11 was produced by producer->        1
    12 was produced by producer->        1
    13 was produced by producer->        1
    65 was produced by producer->        5
     8 was consumed by consumer->        3
     9 was consumed by consumer->        3
    10 was consumed by consumer->        3
    11 was consumed by consumer->        3
    12 was consumed by consumer->        3
    13 was consumed by consumer->        3
    14 was produced by producer->        1
    15 was produced by producer->        1
Producer Thread joined:  2
Producer Thread joined:  3
Producer Thread joined:  4
Producer Thread joined:  5
    66 was produced by producer->        5
    65 was consumed by consumer->        2
    14 was consumed by consumer->        2
    67 was produced by producer->        5
    15 was consumed by consumer->        3
    66 was consumed by consumer->        3
    67 was consumed by consumer->        3
    68 was produced by producer->        5
    69 was produced by producer->        5
    70 was produced by producer->        5
    71 was produced by producer->        5
    72 was produced by producer->        5
    73 was produced by producer->        5
    74 was produced by producer->        5
    68 was consumed by consumer->        3
    69 was consumed by consumer->        3
    70 was consumed by consumer->        3
    71 was consumed by consumer->        3
    72 was consumed by consumer->        3
    73 was consumed by consumer->        3
    74 was consumed by consumer->        3
    75 was produced by producer->        5
    75 was consumed by consumer->        3
Consumer Thread joined:  1
Consumer Thread joined:  2
Consumer Thread joined:  3
Current time: Wed Apr 25 23:58:01 2018

Producer Array  |  Consumer Arraay
1               |  1              
2               |  2              
3               |  3              
4               |  4              
5               |  5              
6               |  6              
7               |  7              
8               |  8              
9               |  9              
10              |  10             
11              |  11             
12              |  12             
13              |  13             
14              |  14             
15              |  15             
16              |  16             
17              |  17             
18              |  18             
19              |  19             
20              |  20             
21              |  21             
22              |  22             
23              |  23             
24              |  24             
25              |  25             
26              |  26             
27              |  27             
28              |  28             
29              |  29             
30              |  30             
31              |  31             
32              |  32             
33              |  33             
34              |  34             
35              |  35             
36              |  36             
37              |  37             
38              |  38             
39              |  39             
40              |  40             
41              |  41             
42              |  42             
43              |  43             
44              |  44             
45              |  45             
46              |  46             
47              |  47             
48              |  48             
49              |  49             
50              |  50             
51              |  51             
52              |  52             
53              |  53             
54              |  54             
55              |  55             
56              |  56             
57              |  57             
58              |  58             
59              |  59             
60              |  60             
61              |  61             
62              |  62             
63              |  63             
64              |  64             
65              |  65             
66              |  66             
67              |  67             
68              |  68             
69              |  69             
70              |  70             
71              |  71             
72              |  72             
73              |  73             
74              |  74             
75              |  75             

Consume and Produce Arrays Match!
Total Runtime: 150.00 seconds
