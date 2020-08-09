if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    q_name = input()
    q_sum = student_marks[q_name][0] + student_marks[q_name][1] + \
             student_marks[q_name][2]
    print(q_sum)
    print("{0:.2f}".format(q_sum/3))
