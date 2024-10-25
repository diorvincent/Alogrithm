#pragma once
#ifndef _ALOGRITHM_H_
#define _ALOGRITHM_H_

#include <string>
#include <algorithm>
#include <vector>
#include<queue>

using namespace std;

#define MAX_STRING_LEN 128
#define MAX_VECTOR_SIZE 100
#define MANACHER_SIZE 10

typedef struct TreeNode* BinTree;
struct TreeNode {
	BinTree left;
	BinTree right;
	BinTree* next;
};

struct listnode {
	int val;
	listnode* next;
	listnode* cur;
	listnode* pre;

public:
	listnode();
	listnode(int n, listnode* nx=NULL);

	listnode(const listnode& a0)
	{
		this->val = a0.val;
		this->next = a0.next;
		this->cur = a0.cur;
		this->pre = a0.pre;
	}
	listnode& operator = (listnode& a)
	{
		if (a != NULL) 
		{
			this->val = a.val;
			this->next = a.next;
			this->cur = a.cur;
			this->pre = a.pre;
		}

		return *this;
	}

	listnode& operator++()		//++i 前置++实现
	{
		++val;			//先自增
		return *this;	//后引用
	}
	listnode operator++(int)	//i++ 后置++实现
	{
		//int参数没有任何意义，只是为了区分是前置还是后置形式
		listnode a = *this;	//保存对象引用
		++(*this);			//自增，调用前面实现的前置++
		return a;			//返回先前保存的对象
	}

	bool operator==(const listnode& a1) const
	{
		return this->val == a1.val;
	};

	bool operator!=(const listnode b) const
	{
		if (this != NULL)
			return this->val != b.val;
		else
			return false;
	};

	bool operator!() const 
	{
		return val == 0;
	};
};


/*
一条包含字母A-Z的消息通过以下映射进行了编码：
'A' -> 1
'B' -> 2
...
'Z' -> 26
要解码已编码的消息，所有数字必须基于上述映射的方法，反向映射回字母（可能有多种方法）。

例如，"11106"可以映射为：
"AAJF"，将消息分组为(1 1 10 6)
"KJF"，将消息分组为(11 10 6)

注意，消息不能分组为(1 11 06)，因为"06"不能映射为"F"，这是由于"6"和"06"在映射中并不等价。
给你一个只含数字的非空字符串s，请计算并返回解码方法的总数。
*/
class Decoding 
{
public:
	int numDecoding(std::string s);
private:
	int binaryTreeTraversal(char chars[], int length, int map[], int index);
};


/*
几张卡牌排成一行，每张卡牌都有一个对应的点数。点数由整数数组cardPoint s给出。
每次行动，你可以从行的开头或者末尾拿一张卡牌，最终你必须正好拿k张卡牌。
你的点数就是你拿到手中的所有卡牌的点数之和。
给你一个整数数组cardPoint s和整数k，请你返回可以获得的最大点数。
*/
class MAXScore {
public:
	int maxScore(int cardPoints[], int k);
};


/*动态规划
给你两个单词 word1 和 word2，请你计算出将 word1 转换成 word2 所使用的最少操作数 。
你可以对一个单词进行如下三种操作：
插入一个字符
删除一个字符
替换一个字符
*/

class MinDistance {
public:
	static int minDistance(string word1, string word2);
	static int minDistance2(string word1, string word2);
};

/*
动态规划解不同子序列
给定一个字符串s和一个字符串t，计算在s的子序列中t出现的个数。

*******************动态规划的三个步骤就是定义状态，列出递推公式，找出边界条件。************************************
*/

class MinDistinct {
public:
	static int minDistinct(string s, string t);
};


/*
双指针两数相加
*/
class _2Pt_Plus 
{
public:
	static listnode add2Numbers(listnode listNode1, listnode listNode2);
};


/*动态规划：最后一块石头
有一堆石头，用整数数组stones表示。其中stones [i]表示第i块石头的重量。
每 一 回 合 ， 从 中 选 出 任 意 两 块 石 头 ， 然 后 将 它 们 一 起 粉 碎 。 
假 设 石 头 的 重 量 分 别 为 x 和y，且x<=y。那么粉碎的可能结果如下：
如果x==y，那么两块石头都会被完全粉碎；
如果x !=y，那么重量为x的石头将会完全粉碎，而重量为y的石头新重量为y - x。
最后，最多只会剩下一块石头。返回此石头最小的可能重量。如果没有石头剩下，就返回0。
*/
class LastStonsWeight
{
public:
	static int laststonweight(int stones[]);
};


/*
背包问题2
*/
class PackageProblem
{
public:
	static int packageProblem1();
	static int packageProblem2();
};

/*
动态规划：求不同路径Ⅱ
一个机器人位于一个 m * n 网格的左上角 （起始点在下图中标记为“Start” ）。
机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角

因为只能从上面或左边走过来，所以递推公式是
dp[i][j]=dp[i -1][j]+dp[i][j -1]。
dp[i -1][j]表示的是从上面走过来的路径条数。
dp[i][j -1]表示的是从左边走过来的路径条数。
*/
class UNIQUE_Path_with_Obstracles
{
public:
	static int unique_path_with_obstracles(vector<vector<int>> obstracleGrid);
};



/*
滑动窗口
给两个整数数组 A 和 B ，返回两个数组中公共的、长度最长的子数组的长度。

示例：
输入：
A: [1,2,3,2,1]
B: [3,2,1,4,7]
输出：3
解释：
长度最长的公共子数组是 [3, 2, 1] 。

提示：
1 <= len(A), len(B) <= 1000
0 <= A[i], B[i] < 100
*/
class FindLength
{
public:
	int findLength(int A[], int B[]);
	
private:
	int ALength, BLength;
	int findLengthHelper(int A[], int B[]);
	int maxLength(int A[], int B[], int aStart, int bStart, int len);
};


/*
旋转图像
给定一个n×n的二维矩阵matri x表示一个图像。请你将图像顺时针旋转90度。
提示：
matrix . length==n
matrix [i]. length==n
1<=n<=20
-1000<=matrix [i][j]<=1000
这题是让把矩阵顺时针旋转90度，最简单的一种方式就是先上下关于中心线翻转，然后再对角线翻转
*/

class RotateMatrix
{
public:
	void rotate();
};


/*
双指针解替换后的最长重复字符
给你一个仅由大写英 文字 母组成的字符串，你可 以 将 任 意 位 置 上 的 字 符 替 换 成 另 外 的 字
符，总共可最多替换k次。在执行上述操作后，找到包含重复字母的最长子串的长度。
注意：字符串长度 和 k 不会超过 10^4。

示例 1：
输入：s = "ABAB", k = 2
输出：4
解释：用两个'A'替换为两个'B' ,反之亦然。
*/

class CharReplace
{
public:
	static int InsteadLongChar(string s, int k);
};


/*
BFS和DFS两种方式求岛屿的最大面积

给定一个包含了一些0和1的非空二维数组grid 。
一个岛屿是由一些相邻的1(代表土地)构成的组合，这里的「相邻」要求两个1必须在水
平或者竖直方向上相邻。你可以假设grid的四个边缘都被0（代表水）包围着。
找到给定的二维数组中最大的岛屿面积。(如果没有岛屿，则返回面积为0。)

*/

class maxAreaOnIsland {
public:
	static int maxAreaOfIsland(vector<vector<int>> grid);
private:
	static int bfs(vector<vector<int>> grid, int i, int j);
};


/*
给定一个数组，它的第i个元素是一支给定股票第i天的价格。
如果你最多只允许完成一笔交易（即买入和卖出一支股票一次），设计一个算法来计算
你所能获取的最大利润。
注意：你不能在买入股票前卖出股票。
*/

class maxProfit {
public:
	static int _maxProfit(vector<int>& prices);
};

/*
一个有名的按摩师会收到源源不断的预约请求，每个预约都可以选择接或不接。在每次
预约服务之间要有休息时间，因此她不能接受相邻的预约。给定一个预约请求序列，替
按摩师找到最优的预约集合（总预约时间最长），返回总的分钟数。
*/
class Massage {
public:
	static int massage(vector<int>& nums);
};



/*
地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人从坐标 [0, 0] 的格子开始移动，
它每次可以向左、右、上、下移动一格（不能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。
例如，当k为18时，机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。但它不能进入方格 [35, 38]，因为3+5+3+8=19。
请问该机器人能够到达多少个格子？
*/

class MoveCount {
public:
	static int movingCount(int m, int n, int k);


private:
	//深度优先搜索
	static int dfs(int i, int j, int m, int n, int k, vector<vector<bool>> visited);
	static int sum(int i, int j);
};


/*
Manacher(马拉车)算法
Manacher于1975年发现了一种线性时间算法，可以在列出给定字符串中从任意位置开始的所有回文子串。
同样的算法也可以在任意位置查找全部极大回文子串，并且时间复杂度是线性的。
*/

class Manacher {
public:
	static string longsPalindrome(string s);
};


/*
删除字符串中的所有相邻重复项
给出由小写字母组成的字符串S，重复项删除操作会选择两个相邻且相同的字母，并删除它们。
在S上反复执行重复项删除操作，直到无法继续删除。
在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。
*/

class RemoveDuplicates {
public:
	static string removeDuplicates(string s);
};



/*
栈的实现
*/
template<class T>
class Stack{
private:
	vector<T> elems;

public:
	void push(T const&);  //入栈
	T pop();						//出栈
	T top() const;				//返回栈顶元素
	bool empty() const { return elems.empty(); }
};

class IsValidStack {
public:
	static bool isValid(string s);
};


#endif