cmake_minimum_required(VERSION 3.24)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Problems)

add_executable(LeetCode
        "Problems/ 448. Find All Numbers Disappeared in an Array.cpp"
        Problems/1.cpp
        Problems/10.cpp
        "Problems/100. Same Tree.cpp"
        "Problems/1007. Minimum Domino Rotations For Equal Row.cpp"
        Problems/1008.cpp
        "Problems/1009. Complement of Base 10 Integer.cpp"
        "Problems/101. Symmetric Tree.cpp"
        "Problems/1010. Pairs of Songs With Total Durations Divisible by 60.cpp"
        "Problems/1014. Best Sightseeing Pair.cpp"
        "Problems/1015. Smallest Integer Divisible by K.cpp"
        "Problems/1019. Next Greater Node In Linked List.cpp"
        Problems/102.cpp
        "Problems/1020. Number of Enclaves.cpp"
        "Problems/1021. Remove Outermost Parentheses.cpp"
        "Problems/1022. Sum of Root To Leaf Binary Numbers.cpp"
        "Problems/1025. Divisor Game.cpp"
        "Problems/1026. Maximum Difference Between Node and Ancestor.cpp"
        Problems/1029.cpp
        "Problems/103. Binary Tree Zigzag Level Order Traversal.cpp"
        "Problems/1032. Stream of Characters.cpp"
        Problems/1035.cpp
        Problems/104.cpp
        "Problems/1041. Robot Bounded In Circle.cpp"
        "Problems/1044. Longest Duplicate Substring.cpp"
        "Problems/105. Construct Binary Tree from Preorder and Inorder Traversal.cpp"
        "Problems/107. Binary Tree Level Order Traversal II.cpp"
        Problems/109.cpp
        "Problems/1091. Shortest Path in Binary Matrix.cpp"
        "Problems/1094. Car Pooling.cpp"
        "Problems/11. Container With Most Water.cpp"
        "Problems/110. Balanced Binary Tree.cpp"
        Problems/1104.cpp
        "Problems/1108. Defanging an IP Address.cpp"
        "Problems/111. Minimum Depth of Binary Tree.cpp"
        "Problems/1110. Delete Nodes And Return Forest.cpp"
        Problems/112.cpp
        Problems/113.cpp
        "Problems/1137. N-th Tribonacci Number.cpp"
        "Problems/114. Flatten Binary Tree to Linked List.cpp"
        "Problems/1143. Longest Common Subsequence.cpp"
        "Problems/115. Distinct Subsequences.cpp"
        "Problems/1155. Number of Dice Rolls With Target Sum.cpp"
        "Problems/116. Populating Next Right Pointers in Each Node.cpp"
        "Problems/1162. As Far from Land as Possible.cpp"
        "Problems/117. Populating Next Right Pointers in Each Node II.cpp"
        "Problems/1178. Number of Valid Words for Each Puzzle.cpp"
        "Problems/118. Pascal's Triangle.cpp"
        "Problems/1189. Maximum Number of Balloons.cpp"
        "Problems/119. Pascal's Triangle II.cpp"
        Problems/1192.cpp
        "Problems/12. Integer to Roman.cpp"
        "Problems/120. Triangle.cpp"
        "Problems/1200. Minimum Absolute Difference.cpp"
        "Problems/121. Best Time to Buy and Sell Stock.cpp"
        "Problems/1217. Minimum Cost to Move Chips to The Same Position.cpp"
        "Problems/1219. Path with Maximum Gold.cpp"
        Problems/122.cpp
        "Problems/123. Best Time to Buy and Sell Stock III.cpp"
        Problems/1232.cpp
        "Problems/1239. Maximum Length of a Concatenated String with Unique Characters.cpp"
        "Problems/124. Binary Tree Maximum Path Sum.cpp"
        Problems/124.cpp
        "Problems/1247. Minimum Swaps to Make Strings Equal.cpp"
        "Problems/1249. Minimum Remove to Make Valid Parentheses.cpp"
        Problems/1249.cpp
        "Problems/125. Valid Palindrome.cpp"
        "Problems/1252. Cells with Odd Values in a Matrix.cpp"
        "Problems/1254. Number of Closed Islands.cpp"
        "Problems/1255. Maximum Score Words Formed by Letters.cpp"
        "Problems/126. Word Ladder II.cpp"
        "Problems/127. Word Ladder.cpp"
        "Problems/1275. Find Winner on a Tic Tac Toe Game.cpp"
        Problems/1277.cpp
        Problems/128.cpp
        "Problems/1281. Subtract the Product and Sum of Digits of an Integer.cpp"
        Problems/1284.cpp
        "Problems/1286. Iterator for Combination.cpp"
        "Problems/1288. Remove Covered Intervals.cpp"
        "Problems/129. Sum Root to Leaf Numbers.cpp"
        Problems/1290.cpp
        Problems/1291.cpp
        Problems/1295.cpp
        Problems/1296.cpp
        Problems/1297.cpp
        "Problems/13. Roman to Integer.cpp"
        "Problems/130. Surrounded Regions.cpp"
        Problems/1304.cpp
        "Problems/1305. All Elements in Two Binary Search Trees.cpp"
        Problems/1305.cpp
        Problems/1306.cpp
        Problems/1309.cpp
        "Problems/131. Palindrome Partitioning.cpp"
        Problems/1310.cpp
        Problems/1312.cpp
        "Problems/1314. Matrix Block Sum.cpp"
        "Problems/1324. Print Words Vertically.cpp"
        "Problems/1328. Break a Palindrome.cpp"
        "Problems/1329. Sort the Matrix Diagonally.cpp"
        "Problems/133. Clone Graph.cpp"
        "Problems/134. Gas Station.cpp"
        "Problems/1345. Jump Game IV.cpp"
        Problems/136.cpp
        "Problems/1363. Largest Multiple of Three.cpp"
        "Problems/137. Single Number II.cpp"
        "Problems/1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree.cpp"
        "Problems/138. Copy List with Random Pointer.cpp"
        "Problems/1381. Design a Stack With Increment Operation.cpp"
        "Problems/139. Word Break.cpp"
        Problems/1396.cpp
        "Problems/14. Longest Common Prefix.cpp"
        "Problems/141. Linked List Cycle.cpp"
        "Problems/1413. Minimum Value to Get Positive Step by Step Sum.cpp"
        "Problems/142. Linked List Cycle II.cpp"
        "Problems/1423. Maximum Points You Can Obtain from Cards.cpp"
        "Problems/143. Reorder List.cpp"
        "Problems/1434. Number of Ways to Wear Different Hats to Each Other.cpp"
        "Problems/144. Binary Tree Preorder Traversal.cpp"
        "Problems/1446. Consecutive Characters.cpp"
        Problems/1448.cpp
        "Problems/145. Binary Tree Postorder Traversal.cpp"
        Problems/1450.cpp
        Problems/1451.cpp
        Problems/1452.cpp
        Problems/146.cpp
        Problems/1460.cpp
        Problems/1461.cpp
        Problems/1462.cpp
        Problems/1463.cpp
        "Problems/1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts.cpp"
        "Problems/147. Insertion Sort List.cpp"
        "Problems/1470. Shuffle the Array.cpp"
        "Problems/1477. Find Two Non-overlapping Sub-arrays Each With Target Sum.cpp"
        "Problems/148. Sort List.cpp"
        "Problems/1480. Running Sum of 1d Array.cpp"
        "Problems/1481. Least Number of Unique Integers after K Removals.cpp"
        "Problems/1486. XOR Operation in an Array.cpp"
        "Problems/149. Max Points on a Line.cpp"
        "Problems/1491. Average Salary Excluding the Minimum and Maximum Salary.cpp"
        "Problems/1497. Check If Array Pairs Are Divisible by k.cpp"
        "Problems/15. 3Sum.cpp"
        "Problems/1502. Can Make Arithmetic Progression From Sequence.cpp"
        Problems/151.cpp
        "Problems/1510. Stone Game IV.cpp"
        "Problems/1512. Number of Good Pairs.cpp"
        "Problems/1518. Water Bottles.cpp"
        "Problems/152. Maximum Product Subarray.cpp"
        "Problems/1523. Count Odd Numbers in an Interval Range.cpp"
        "Problems/1526. Minimum Number of Increments on Subarrays to Form a Target Array.cpp"
        "Problems/153. Find Minimum in Rotated Sorted Array.cpp"
        "Problems/1534. Count Good Triplets.cpp"
        Problems/1539.cpp
        "Problems/154. Find Minimum in Rotated Sorted Array II.cpp"
        "Problems/155. Min Stack.cpp"
        "Problems/1557. Minimum Number of Vertices to Reach All Nodes.cpp"
        "Problems/1558. Minimum Numbers of Function Calls to Make Target Array.cpp"
        "Problems/1563. Stone Game V.cpp"
        "Problems/1567. Maximum Length of Subarray With Positive Product.cpp"
        "Problems/1568. Minimum Number of Days to Disconnect Island.cpp"
        "Problems/1572. Matrix Diagonal Sum.cpp"
        "Problems/1573. Number of Ways to Split a String.cpp"
        "Problems/1576. Replace All ?'s to Avoid Consecutive Repeating Characters.cpp"
        "Problems/1588. Sum of All Odd Length Subarrays.cpp"
        "Problems/1594. Maximum Non Negative Product in a Matrix.cpp"
        "Problems/16. 3Sum Closest.cpp"
        "Problems/160. Intersection of Two Linked Lists.cpp"
        "Problems/1600. Throne Inheritance.cpp"
        "Problems/1609. Even Odd Tree.cpp"
        "Problems/1614. Maximum Nesting Depth of the Parentheses.cpp"
        "Problems/162. Find Peak Element.cpp"
        Problems/1629.cpp
        "Problems/1631. Path With Minimum Effort.cpp"
        "Problems/164. Maximum Gap.cpp"
        "Problems/1646. Get Maximum in Generated Array.cpp"
        "Problems/165. Compare Version Numbers.cpp"
        "Problems/1652. Defuse the Bomb.cpp"
        "Problems/1668. Maximum Repeating Substring.cpp"
        "Problems/1669. Merge In Between Linked Lists.cpp"
        "Problems/167. Two Sum II - Input Array Is Sorted.cpp"
        "Problems/1670. Design Front Middle Back Queue.cpp"
        "Problems/1672. Richest Customer Wealth.cpp"
        "Problems/1675. Minimize Deviation in Array.cpp"
        "Problems/168. Excel Sheet Column Title.cpp"
        Problems/169.cpp
        Problems/17.cpp
        "Problems/1704. Determine if String Halves Are Alike.cpp"
        "Problems/171. Excel Sheet Column Number.cpp"
        "Problems/172. Factorial Trailing Zeroes.cpp"
        Problems/1721.cpp
        "Problems/1723. Find Minimum Time to Finish All Jobs.cpp"
        "Problems/173. Binary Search Tree Iterator.cpp"
        "Problems/174. Dungeon Game.cpp"
        "Problems/1748. Sum of Unique Elements.cpp"
        "Problems/1779. Find Nearest Point That Has the Same X or Y Coordinate.cpp"
        "Problems/179. Largest Number.cpp"
        "Problems/1790. Check if One String Swap Can Make Strings Equal.cpp"
        "Problems/1793. Maximum Score of a Good Subarray.cpp"
        "Problems/18. 4Sum.cpp"
        "Problems/1802. Maximum Value at a Given Index in a Bounded Array.cpp"
        "Problems/1805. Number of Different Integers in a String.cpp"
        "Problems/1812. Determine Color of a Chessboard Square.cpp"
        "Problems/1816. Truncate Sentence.cpp"
        "Problems/1822. Sign of the Product of an Array.cpp"
        "Problems/1823. Find the Winner of the Circular Game.cpp"
        "Problems/1860. Incremental Memory Leak.cpp"
        "Problems/1865. Finding Pairs With a Certain Sum.cpp"
        "Problems/187. Repeated DNA Sequences.cpp"
        "Problems/1876. Substrings of Size Three with Distinct Characters.cpp"
        "Problems/188. Best Time to Buy and Sell Stock IV.cpp"
        "Problems/1884. Egg Drop With 2 Eggs and N Floors.cpp"
        "Problems/1886. Determine Whether Matrix Can Be Obtained By Rotation.cpp"
        "Problems/189. Rotate Array.cpp"
        Problems/19.cpp
        "Problems/190. Reverse Bits.cpp"
        Problems/1904.cpp
        "Problems/1905. Count Sub Islands.cpp"
        "Problems/191. Number of 1 Bits.cpp"
        "Problems/1912. Design Movie Rental System.cpp"
        "Problems/1926. Nearest Exit from Entrance in Maze.cpp"
        "Problems/1942. The Number of the Smallest Unoccupied Chair.cpp"
        "Problems/1955. Count Number of Special Subsequences.cpp"
        "Problems/198. House Robber.cpp"
        Problems/1980.cpp
        "Problems/1984. Minimum Difference Between Highest and Lowest of K Scores.cpp"
        "Problems/199. Binary Tree Right Side View.cpp"
        "Problems/1991. Find the Middle Index in Array.cpp"
        "Problems/1992. Find All Groups of Farmland.cpp"
        "Problems/1993. Operations on Tree.cpp"
        "Problems/1994. The Number of Good Subsets.cpp"
        "Problems/1995. Count Special Quadruplets.cpp"
        "Problems/1996. The Number of Weak Characters in the Game.cpp"
        "Problems/1997. First Day Where You Have Been in All the Rooms.cpp"
        Problems/2.cpp
        Problems/20.cpp
        Problems/200.cpp
        Problems/201.cpp
        "Problems/202. Happy Number.cpp"
        "Problems/2023. Number of Pairs of Strings With Concatenation Equal to Target.cpp"
        "Problems/203. Remove Linked List Elements.cpp"
        "Problems/204. Count Primes.cpp"
        "Problems/2040. Kth Smallest Product of Two Sorted Arrays.cpp"
        Problems/205.cpp
        Problems/206.cpp
        Problems/207.cpp
        Problems/208.cpp
        "Problems/209. Minimum Size Subarray Sum.cpp"
        "Problems/2094. Finding 3-Digit Even Numbers.cpp"
        "Problems/2095. Delete the Middle Node of a Linked List.cpp"
        "Problems/2096. Step-By-Step Directions From a Binary Tree Node to Another.cpp"
        Problems/21.cpp
        "Problems/210. Course Schedule II.cpp"
        "Problems/2103. Rings and Rods.cpp"
        Problems/211.cpp
        "Problems/2119. A Number After a Double Reversal.cpp"
        Problems/212.cpp
        "Problems/213. House Robber II.cpp"
        "Problems/2138. Divide a String Into Groups of Size k.cpp"
        "Problems/2139. Minimum Moves to Reach Target Score.cpp"
        "Problems/2140. Solving Questions With Brainpower.cpp"
        "Problems/2141. Maximum Running Time of N Computers.cpp"
        "Problems/215. Kth Largest Element in an Array.cpp"
        "Problems/2154. Keep Multiplying Found Values by Two.cpp"
        "Problems/2155. All Divisions With the Highest Score of a Binary Array.cpp"
        "Problems/216. Combination Sum III.cpp"
        "Problems/2160. Minimum Sum of Four Digit Number After Splitting Digits.cpp"
        "Problems/2161. Partition Array According to Given Pivot.cpp"
        "Problems/2162. Minimum Cost to Set Cooking Time.cpp"
        "Problems/2164. Sort Even and Odd Indices Independently.cpp"
        "Problems/2165. Smallest Value of the Rearranged Number.cpp"
        "Problems/2166. Design Bitset.cpp"
        "Problems/2169. Count Operations to Obtain Zero.cpp"
        "Problems/217. Contains Duplicate.cpp"
        "Problems/2170. Minimum Operations to Make the Array Alternating.cpp"
        "Problems/2171. Removing Minimum Number of Magic Beans.cpp"
        "Problems/2176. Count Equal and Divisible Pairs in an Array.cpp"
        "Problems/2177. Find Three Consecutive Integers That Sum to a Given Number.cpp"
        "Problems/2178. Maximum Split of Positive Even Integers.cpp"
        "Problems/2179. Count Good Triplets in an Array.cpp"
        Problems/218.cpp
        "Problems/2180. Count Integers With Even Digit Sum.cpp"
        "Problems/2181. Merge Nodes in Between Zeros.cpp"
        "Problems/2182. Construct String With Repeat Limit.cpp"
        "Problems/2183. Count Array Pairs Divisible by K.cpp"
        "Problems/2185. Counting Words With a Given Prefix.cpp"
        "Problems/2186. Minimum Number of Steps to Make Two Strings Anagram II.cpp"
        "Problems/2187. Minimum Time to Complete Trips.cpp"
        "Problems/2188. Minimum Time to Finish the Race.cpp"
        Problems/219.cpp
        Problems/22.cpp
        "Problems/221. Maximal Square.cpp"
        "Problems/222. Count Complete Tree Nodes.cpp"
        "Problems/223. Rectangle Area.cpp"
        "Problems/225. Implement Stack using Queues.cpp"
        Problems/226.cpp
        "Problems/227. Basic Calculator II.cpp"
        "Problems/228. Summary Ranges.cpp"
        Problems/23.cpp
        Problems/230.cpp
        Problems/231.cpp
        "Problems/232. Implement Queue using Stacks.cpp"
        Problems/236.cpp
        Problems/237.cpp
        Problems/238.cpp
        "Problems/239. Sliding Window Maximum.cpp"
        Problems/24.cpp
        "Problems/240. Search a 2D Matrix II.cpp"
        Problems/242.cpp
        "Problems/25. Reverse Nodes in k-Group.cpp"
        "Problems/257. Binary Tree Paths.cpp"
        Problems/257.cpp
        "Problems/258. Add Digits.cpp"
        "Problems/2583. Kth Largest Sum in a Binary Tree.cpp"
        Problems/26.cpp
        "Problems/260. Single Number III.cpp"
        "Problems/263. Ugly Number.cpp"
        "Problems/264. Ugly Number II.cpp"
        Problems/268.cpp
        "Problems/27. Remove Element.cpp"
        Problems/27.cpp
        "Problems/274. H-Index.cpp"
        "Problems/275. H-Index II.cpp"
        "Problems/279. Perfect Squares.cpp"
        "Problems/28. Implement strStr().cpp"
        Problems/283.cpp
        "Problems/287. Find the Duplicate Number.cpp"
        Problems/289.cpp
        Problems/29.cpp
        "Problems/290. Word Pattern.cpp"
        "Problems/292. Nim Game.cpp"
        "Problems/295. Find Median from Data Stream.cpp"
        "Problems/297. Serialize and Deserialize Binary Tree.cpp"
        Problems/3.cpp
        "Problems/300. Longest Increasing Subsequence.cpp"
        Problems/300.cpp
        "Problems/303. Range Sum Query - Immutable.cpp"
        "Problems/304. Range Sum Query 2D - Immutable.cpp"
        "Problems/307. Range Sum Query - Mutable.cpp"
        "Problems/309. Best Time to Buy and Sell Stock with Cooldown.cpp"
        Problems/31.cpp
        "Problems/310. Minimum Height Trees.cpp"
        "Problems/313. Super Ugly Number.cpp"
        Problems/315.cpp
        "Problems/318. Maximum Product of Word Lengths.cpp"
        Problems/32.cpp
        "Problems/322. Coin Change.cpp"
        "Problems/326. Power of Three.cpp"
        Problems/328.cpp
        Problems/33.cpp
        Problems/330.cpp
        Problems/331.cpp
        "Problems/334. Increasing Triplet Subsequence.cpp"
        "Problems/337. House Robber III.cpp"
        Problems/338.cpp
        "Problems/34. Find First and Last Position of Element in Sorted Array.cpp"
        "Problems/341. Flatten Nested List Iterator.cpp"
        "Problems/342. Power of Four.cpp"
        "Problems/343. Integer Break.cpp"
        Problems/344.cpp
        Problems/345.cpp
        "Problems/347. Top K Frequent Elements.cpp"
        "Problems/349. Intersection of Two Arrays.cpp"
        Problems/35.cpp
        "Problems/350. Intersection of Two Arrays II.cpp"
        "Problems/355. Design Twitter.cpp"
        "Problems/36. Valid Sudoku.cpp"
        Problems/367.cpp
        Problems/368.cpp
        Problems/37.cpp
        "Problems/374. Guess Number Higher or Lower.cpp"
        "Problems/376. Wiggle Subsequence.cpp"
        "Problems/377. Combination Sum IV.cpp"
        Problems/378.cpp
        Problems/380.cpp
        "Problems/381. Insert Delete GetRandom O(1) - Duplicates allowed.cpp"
        "Problems/382. Linked List Random Node.cpp"
        "Problems/383. Ransom Note.cpp"
        "Problems/384. Shuffle an Array.cpp"
        Problems/387.cpp
        "Problems/389. Find the Difference.cpp"
        "Problems/39. Combination Sum.cpp"
        Problems/392.cpp
        "Problems/394. Decode String.cpp"
        Problems/4.cpp
        "Problems/40. Combination Sum II.cpp"
        Problems/402.cpp
        "Problems/403. Frog Jump.cpp"
        "Problems/404. Sum of Left Leaves.cpp"
        "Problems/405. Convert a Number to Hexadecimal.cpp"
        Problems/406.cpp
        "Problems/407. Trapping Rain Water II.cpp"
        "Problems/409. Longest Palindrome.cpp"
        Problems/41.cpp
        "Problems/413. Arithmetic Slices.cpp"
        "Problems/415. Add Strings.cpp"
        Problems/416.cpp
        "Problems/417. Pacific Atlantic Water Flow.cpp"
        "Problems/42. Trapping Rain Water.cpp"
        Problems/421.cpp
        Problems/429.cpp
        "Problems/43. Multiply Strings.cpp"
        "Problems/430. Flatten a Multilevel Doubly Linked List.cpp"
        Problems/432.cpp
        "Problems/434. Number of Segments in a String.cpp"
        "Problems/435. Non-overlapping Intervals.cpp"
        Problems/437.cpp
        Problems/438.cpp
        Problems/44.cpp
        "Problems/441. Arranging Coins.cpp"
        "Problems/442. Find All Duplicates in an Array.cpp"
        "Problems/449. Serialize and Deserialize BST.cpp"
        "Problems/45. Jump Game II.cpp"
        "Problems/450. Delete Node in a BST.cpp"
        Problems/451.cpp
        "Problems/452. Minimum Number of Arrows to Burst Balloons.cpp"
        "Problems/454. 4Sum II.cpp"
        "Problems/455. Assign Cookies.cpp"
        Problems/46.cpp
        "Problems/461. Hamming Distance.cpp"
        "Problems/463. Island Perimeter.cpp"
        "Problems/47. Permutations II.cpp"
        Problems/470.cpp
        "Problems/476. Number Complement.cpp"
        "Problems/477. Total Hamming Distance.cpp"
        "Problems/48. Rotate Image.cpp"
        Problems/485.cpp
        Problems/49.cpp
        "Problems/494. Target Sum.cpp"
        "Problems/496. Next Greater Element I.cpp"
        "Problems/5. Longest Palindromic Substring.cpp"
        Problems/50.cpp
        Problems/506.cpp
        "Problems/507. Perfect Number.cpp"
        "Problems/509. Fibonacci Number.cpp"
        Problems/51.cpp
        Problems/513.cpp
        "Problems/515. Find Largest Value in Each Tree Row.cpp"
        "Problems/516. Longest Palindromic Subsequence.cpp"
        "Problems/516. Longest Palindromic Subsequence_1_.cpp"
        Problems/518.cpp
        "Problems/520. Detect Capital.cpp"
        "Problems/521. Longest Uncommon Subsequence I.cpp"
        "Problems/522. Longest Uncommon Subsequence II.cpp"
        Problems/525.cpp
        Problems/528.cpp
        Problems/53.cpp
        "Problems/532. K-diff Pairs in an Array.cpp"
        Problems/535.cpp
        "Problems/54. Spiral Matrix.cpp"
        Problems/54.cpp
        Problems/540.cpp
        Problems/541.cpp
        "Problems/542. 01 Matrix.cpp"
        "Problems/543. Diameter of Binary Tree.cpp"
        "Problems/547. Number of Provinces.cpp"
        Problems/55.cpp
        "Problems/556. Next Greater Element III.cpp"
        "Problems/557. Reverse Words in a String III.cpp"
        "Problems/559. Maximum Depth of N-ary Tree.cpp"
        Problems/56.cpp
        Problems/560.cpp
        "Problems/561. Array Partition I.cpp"
        "Problems/563. Binary Tree Tilt.cpp"
        "Problems/565. Array Nesting.cpp"
        "Problems/566. Reshape the Matrix.cpp"
        Problems/567.cpp
        "Problems/572. Subtree of Another Tree.cpp"
        "Problems/58. Length of Last Word.cpp"
        "Problems/583. Delete Operation for Two Strings.cpp"
        "Problems/587. Erect the Fence.cpp"
        Problems/589.cpp
        "Problems/59. Spiral Matrix II.cpp"
        Problems/590.cpp
        "Problems/60. Permutation Sequence.cpp"
        "Problems/605. Can Place Flowers.cpp"
        Problems/606.cpp
        "Problems/61. Rotate List.cpp"
        "Problems/617. Merge Two Binary Trees.cpp"
        Problems/62.cpp
        "Problems/622. Design Circular Queue.cpp"
        "Problems/623. Add One Row to Tree.cpp"
        Problems/628.cpp
        "Problems/63. Unique Paths II.cpp"
        Problems/633.cpp
        "Problems/64. Minimum Path Sum.cpp"
        "Problems/641. Design Circular Deque.cpp"
        "Problems/647. Palindromic Substrings.cpp"
        "Problems/650. 2 Keys Keyboard.cpp"
        "Problems/653. Two Sum IV - Input is a BST.cpp"
        "Problems/658. Find K Closest Elements.cpp"
        "Problems/66. Plus One.cpp"
        "Problems/662. Maximum Width of Binary Tree.cpp"
        Problems/665.cpp
        "Problems/668. Kth Smallest Number in Multiplication Table.cpp"
        "Problems/669. Trim a Binary Search Tree.cpp"
        "Problems/67. Add Binary.cpp"
        Problems/671.cpp
        "Problems/673. Number of Longest Increasing Subsequence.cpp"
        "Problems/674. Longest Continuous Increasing Subsequence.cpp"
        "Problems/677. Map Sum Pairs.cpp"
        "Problems/680. Valid Palindrome II.cpp"
        "Problems/684. Redundant Connection.cpp"
        "Problems/685. Redundant Connection II.cpp"
        "Problems/687. Longest Univalue Path.cpp"
        "Problems/69. Sqrt(x).cpp"
        Problems/690.cpp
        "Problems/693. Binary Number with Alternating Bits.cpp"
        "Problems/695. Max Area of Island.cpp"
        "Problems/698. Partition to K Equal Sum Subsets.cpp"
        Problems/7.cpp
        "Problems/70. Climbing Stairs.cpp"
        Problems/700.cpp
        "Problems/701. Insert into a Binary Search Tree.cpp"
        "Problems/703. Kth Largest Element in a Stream.cpp"
        "Problems/704. Binary Search.cpp"
        "Problems/706. Design HashMap.cpp"
        "Problems/707. Design Linked List.cpp"
        Problems/71.cpp
        "Problems/713. Subarray Product Less Than K.cpp"
        "Problems/714. Best Time to Buy and Sell Stock with Transaction Fee.cpp"
        "Problems/718. Maximum Length of Repeated Subarray.cpp"
        "Problems/719. Find K-th Smallest Pair Distance.cpp"
        Problems/72.cpp
        "Problems/721. Accounts Merge.cpp"
        "Problems/722. Remove Comments.cpp"
        "Problems/725. Split Linked List in Parts.cpp"
        "Problems/728. Self Dividing Numbers.cpp"
        Problems/733.cpp
        "Problems/739. Daily Temperatures.cpp"
        "Problems/74. Search a 2D Matrix.cpp"
        "Problems/740. Delete and Earn.cpp"
        "Problems/746. Min Cost Climbing Stairs.cpp"
        Problems/75.cpp
        Problems/754.cpp
        "Problems/762. Prime Number of Set Bits in Binary Representation.cpp"
        "Problems/763. Partition Labels.cpp"
        "Problems/764. Largest Plus Sign.cpp"
        Problems/767.cpp
        "Problems/77. Combinations.cpp"
        "Problems/771. Jewels and Stones.cpp"
        "Problems/78. Subsets.cpp"
        Problems/785.cpp
        "Problems/786. K-th Smallest Prime Fraction.cpp"
        Problems/79.cpp
        "Problems/790. Domino and Tromino Tiling.cpp"
        "Problems/797. All Paths From Source to Target.cpp"
        "Problems/798. Smallest Rotation with Highest Score.cpp"
        Problems/8.cpp
        "Problems/80. Remove Duplicates from Sorted Array II.cpp"
        "Problems/812. Largest Triangle Area.cpp"
        Problems/82.cpp
        Problems/822.cpp
        Problems/83.cpp
        "Problems/834. Sum of Distances in Tree.cpp"
        "Problems/838. Push Dominoes.cpp"
        "Problems/84. Largest Rectangle in Histogram.cpp"
        "Problems/841. Keys and Rooms.cpp"
        "Problems/844. Backspace String Compare.cpp"
        "Problems/847. Shortest Path Visiting All Nodes.cpp"
        "Problems/848. Shifting Letters.cpp"
        "Problems/849. Maximize Distance to Closest Person.cpp"
        "Problems/85. Maximal Rectangle.cpp"
        "Problems/851. Loud and Rich.cpp"
        "Problems/856. Score of Parentheses.cpp"
        "Problems/859. Buddy Strings.cpp"
        "Problems/86. Partition List.cpp"
        "Problems/863. All Nodes Distance K in Binary Tree.cpp"
        "Problems/868. Binary Gap.cpp"
        Problems/869.cpp
        "Problems/87. Scramble String.cpp"
        "Problems/875. Koko Eating Bananas.cpp"
        Problems/876.cpp
        Problems/877.cpp
        "Problems/878. Nth Magical Number.cpp"
        Problems/88.cpp
        "Problems/881. Boats to Save People.cpp"
        "Problems/882. Reachable Nodes In Subdivided Graph.cpp"
        Problems/886.cpp
        "Problems/890. Find and Replace Pattern.cpp"
        "Problems/894. All Possible Full Binary Trees.cpp"
        "Problems/896. Monotonic Array.cpp"
        "Problems/899. Orderly Queue.cpp"
        "Problems/9. Palindrome Number.cpp"
        Problems/90.cpp
        Problems/901.cpp
        "Problems/902. Numbers At Most N Given Digit Set.cpp"
        "Problems/91. Decode Ways.cpp"
        "Problems/911. Online Election.cpp"
        "Problems/914. X of a Kind in a Deck of Cards.cpp"
        "Problems/917. Reverse Only Letters.cpp"
        Problems/918.cpp
        "Problems/919. Complete Binary Tree Inserter.cpp"
        "Problems/92. Reverse Linked List II.cpp"
        "Problems/922. Sort Array By Parity II.cpp"
        "Problems/926. Flip String to Monotone Increasing.cpp"
        "Problems/929. Unique Email Addresses.cpp"
        "Problems/93. Restore IP Addresses.cpp"
        "Problems/930. Binary Subarrays With Sum.cpp"
        "Problems/931. Minimum Falling Path Sum.cpp"
        Problems/934.cpp
        "Problems/938. Range Sum of BST.cpp"
        "Problems/94. Binary Tree Inorder Traversal.cpp"
        "Problems/941. Valid Mountain Array.cpp"
        "Problems/95. Unique Binary Search Trees II.cpp"
        "Problems/952. Largest Component Size by Common Factor.cpp"
        "Problems/953. Verifying an Alien Dictionary.cpp"
        "Problems/96. Unique Binary Search Trees.cpp"
        Problems/966.cpp
        Problems/973.cpp
        "Problems/976. Largest Perimeter Triangle.cpp"
        Problems/977.cpp
        "Problems/978. Longest Turbulent Subarray.cpp"
        Problems/98.cpp
        "Problems/980. Unique Paths III.cpp"
        Problems/981.cpp
        "Problems/983. Minimum Cost For Tickets.cpp"
        Problems/986.cpp
        "Problems/988. Smallest String Starting From Leaf.cpp"
        "Problems/989. Add to Array-Form of Integer.cpp"
        "Problems/99. Recover Binary Search Tree.cpp"
        Problems/993.cpp
        "Problems/994. Rotting Oranges.cpp"
        Problems/997.cpp "Problems/2830. Maximize the Profit as the Salesman.cpp")
