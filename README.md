# CalculateTrainer

#### 介绍
基于C++命令行界面的小学运算练习器

#### 项目日志
>2023/1/3
* 新建仓库CalculateTrainer初始化项目
>2023/1/4
* 完成各级菜单栏展示以及跳转
* 完成“系统说明”菜单项的内容
* 完成单独加法和单独减法运算练习函数的实现
>2023/1/5
* 完成单独乘法和单独除法运算练习函数的实现

>2023/1/6

* 完成混合运算练习（不含括号）函数的实现
* 考虑到混合运算中浮点数精度损失问题删除混合运算中的除法运算

>2023/1/7

* 修复混合运算中计算错误的bug

#### 目录结构

```bash
CalculateTrainer
├─ .vs
│    └─ CalculateTrainer
│           ├─ project-colors.json
│           └─ v17
├─ CalculateTrainer
│    ├─ AdditionTrainer.cpp              # “加法运算练习”函数
│    ├─ CalculateMixed.cpp               # “混合运算计算生成式子”函数
│    ├─ CalculateTrainer.vcxproj
│    ├─ CalculateTrainer.vcxproj.filters
│    ├─ CalculateTrainer.vcxproj.user
│    ├─ CountNearNum.cpp			# “混合运算计算相邻两项”函数
│    ├─ DivisionTrainer.cpp			# “除法运算练习”函数
│    ├─ Menu.h        			# “菜单函数”声明头文件
│    ├─ MixedTrainer.cpp                 # “混合运算练习”主函数
│    ├─ MultiplyTrainer.cpp              # “乘法运算练习“函数
│    ├─ ShowMainMenu.cpp			# “展示主菜单”函数
│    ├─ ShowPatternMenu.cpp			# “展示模式选择菜单”函数
│    ├─ ShowTrainerDesc.cpp			# “展示系统说明”函数
│    ├─ SubtractionTrainer.cpp		# “减法运算练习”函数
│    ├─ Trainer.h				# “练习函数”声明头文件
│    ├─ compare.cpp				# “混合运算运算符优先级比较”函数
│    ├─ main.cpp				# 主函数
│    ├─ var.cpp				# “全局变量”定义
│    ├─ var.h					# “全局变量”声明头文件
│    └─ x64
│           └─ Debug
├─ CalculateTrainer.sln
└─ x64
       └─ Debug
              ├─ CalculateTrainer.exe
              └─ CalculateTrainer.pdb
```

