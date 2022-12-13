# BMISortingMachine
# You are given 𝑁 data where each data consists of ID, name, and heigh in foot and inch. Then, there are 𝑀 queries. For each query, given a variable 𝑥 which represents a height in cm. You are asked for help to display all data whose height is less than or equal to 𝑥, ordered descending by the height. If there are 2 data which has the same height, sort ascending by the ID. If no data satisfies the query, output “-1”. Note that 1 foot = 12 inch, and 1 inch = 2,54 cm.
# Input Format
# The first line consists of an integer 𝑁. The next 𝑁 lines consists of the given data in the format “A,B,C D” where A, B, C, and D represent ID, name, height in feet, and height in inch, respectively. The next line consists of an integer 𝑀. The next 𝑀 lines consist of an integer 𝑥 which represents the query.
# Output Format
# Each query is started by “Q”, followed by the query number started from 1, followed by “:”. For each query, if there is data to display, then output the data sorted descending based on the height with the following format: “<ID> <Name> <Height in cm>”. If there is no data to display, output “-1”.
# Constraints
# • 1 ≤ 𝑁 × 𝑀 ≤ 5 × 104
# • ID is an integer between 1 and 𝑁. It is guaranteed that 2 data will not have the same ID.
# • Length of each name is between 1 and 20 (inclusive). Names consist of Latin alphabet or whitespace. It is guaranteed that the first and last character are not whitespaces.
# • Height in foot is between 0and 7 (inclusive). Height in inch is between 0 and 11 (inclusive).
# • 1 ≤ 𝑥 ≤ 200
# Subtask 1:
# • 1 ≤ 𝑁 ≤ 102
# Subtask 2:
# • No additional constraint
