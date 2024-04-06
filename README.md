1. Perform Dijkstra for all starting nodes. Then, pick the on with the largest distance.
2. Has to be decided
3. Get the max score from k to the ending and the max score from the ending to 1. Add them together. For finding the max score you should use DP, and while tracking the state you must remember where you were and what is your score.
4. Go through all the IDs. If you find a relative, add him to the president's family list. While checking if someone is related go through the entire family list.
5. Generate a tree based on the data provided, then traverse the tree, finding the largest disparity in wealth. In order to find the disparity, find the smallest node in each subtree and propagate it upwards. Keep finding the current node minus the smallest node and finally report the largest disparity.
6. Brute-Force your way through the table, manually calculating each sum. In the end, report the largest difference.
7. Use DP to find the number of ways. Keep track of direction and number of segments travelled.
8. Duplicate the whole table so if i is greater than j then you don't need to wrap around. Then, try every single pair to see which one works.
9. Find the number of periodic strings, them subtract it from the total number of strings. In order to find the number of periodic strings, find all the divisors of the string of that length, then calculate the total number of strings for each divisor and then add them all up.
10. Has to be decided
11. Calculate the number of museums visited for each city. Choose the highest number of cities and the lowest number of cities and then keep visiting them.
12. It is a DP Problem, states tracked are XP and strength.
13. You can check whether all statements pieced together are correct or not. Definitely if somebody claims one is a parasite and the other claims one is human, you add all who claimed the person who blamed the creature to be a parasite plus the person. On the other hand, you add all those who claimed the person who called the creature a human a human plus that person plus one and take the max. You do that for all contradictions. Addition required
14. Construct a grid where 1 represents a cultivated field and 0 represents an uncultivated field. Use BFS to find all fields connected and then find the perimeter. Do so for all cultivated segments.
15. Organise the employees into their own trees. Separate them into odd or even, and then as you traverse the tree add the level of each node to the total.
16. Use a DP approach where the states are the position of blocks and the column they are in. Find out first for a fixed number of rows (1 and 2), and then multiply for all the rows.
17. Has to be decided
18. Keep track of which number is associated with which index by using a map. Duplicate the array and then sort that. Then take difference between the largest and smallest number. This is too simple to be a solution/Addition Required
19. Has to be decided
20. Find all the Alfa cities, then find all the Bravo cities. Perform Floyd-Warshall for both cities. If there is still infinity as an edge value it means it is not possible.In order to find the number of ways to traverse, Addition Required
21. For each employee, find the closest office. After that is done, assign every employee to their chosen office. If their chosen office is full, then find the next closest office and try assigning him there.
22. The problem indicates that the data structure is a tree. You can find a path for city A to city B and then find using DP (states tracked are current score and whether you can loot or not) the cities to loot.
23. Find all the Alfa cities, then find all the Bravo cities. Perform Floyd-Warshall for both cities. If there is still infinity as an edge value it means it is not possible.In order to find the number of ways to traverse, Addition Required
24. Construct a graph with all the edges and their respective heights. Addition Required
25. This is a DP problem, states tracked would be whether a wall is placed or not, and number of organisms.
26. Traverse all the values in a given time period. Then, as you traverse the list, find how many were greater than the previous numbers. That is the nostalgic index.
