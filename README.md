# BMISortingMachine
# You are given š data where each data consists of ID, name, and heigh in foot and inch. Then, there are š queries. For each query, given a variable š„ which represents a height in cm. You are asked for help to display all data whose height is less than or equal to š„, ordered descending by the height. If there are 2 data which has the same height, sort ascending by the ID. If no data satisfies the query, output ā-1ā. Note that 1 foot = 12 inch, and 1 inch = 2,54 cm.
# Input Format
# The first line consists of an integer š. The next š lines consists of the given data in the format āA,B,C Dā where A, B, C, and D represent ID, name, height in feet, and height in inch, respectively. The next line consists of an integer š. The next š lines consist of an integer š„ which represents the query.
# Output Format
# Each query is started by āQā, followed by the query number started from 1, followed by ā:ā. For each query, if there is data to display, then output the data sorted descending based on the height with the following format: ā<ID> <Name> <Height in cm>ā. If there is no data to display, output ā-1ā.
# Constraints
# ā¢ 1 ā¤ š Ć š ā¤ 5 Ć 104
# ā¢ ID is an integer between 1 and š. It is guaranteed that 2 data will not have the same ID.
# ā¢ Length of each name is between 1 and 20 (inclusive). Names consist of Latin alphabet or whitespace. It is guaranteed that the first and last character are not whitespaces.
# ā¢ Height in foot is between 0and 7 (inclusive). Height in inch is between 0 and 11 (inclusive).
# ā¢ 1 ā¤ š„ ā¤ 200
# Subtask 1:
# ā¢ 1 ā¤ š ā¤ 102
# Subtask 2:
# ā¢ No additional constraint
