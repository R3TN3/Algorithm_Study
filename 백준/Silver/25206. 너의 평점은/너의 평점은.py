import sys

total = 0
total_credit = 0
grade_list = ["A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"]
grade_average_credit_list = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]

for _ in range(20):
    name, credit, grade = map(str, sys.stdin.readline().split())
    credit = float(credit)
    if grade == "P":
        continue

    total += credit * grade_average_credit_list[grade_list.index(grade)]
    total_credit += credit

if total_credit == 0:
    sys.stdout.write(f"{0:.6f}")
else:
    sys.stdout.write(f"{total / total_credit:.6f}")