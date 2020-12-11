#!/usr/bin/python3
# coding: utf-8
# 作者:Pscly
# 创建日期:
# version:
#

stu_cj = []

stu_id = 0
for i in range(1, 4):
    # stu_id += 1
    stu_cj.append(int(input(f'请输入学生{i}的分数>>:').strip(" ")))
print('学生的平均值是', sum(stu_cj) / len(stu_cj))
for i, j in enumerate(stu_cj, 1):
    # print(i, j)
    print(f"同学{i}的成绩是{j},和平均值相差{j-(sum(stu_cj) / len(stu_cj))}")
