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

	listnode& operator++()		//++i ǰ��++ʵ��
	{
		++val;			//������
		return *this;	//������
	}
	listnode operator++(int)	//i++ ����++ʵ��
	{
		//int����û���κ����壬ֻ��Ϊ��������ǰ�û��Ǻ�����ʽ
		listnode a = *this;	//�����������
		++(*this);			//����������ǰ��ʵ�ֵ�ǰ��++
		return a;			//������ǰ����Ķ���
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
һ��������ĸA-Z����Ϣͨ������ӳ������˱��룺
'A' -> 1
'B' -> 2
...
'Z' -> 26
Ҫ�����ѱ������Ϣ���������ֱ����������ӳ��ķ���������ӳ�����ĸ�������ж��ַ�������

���磬"11106"����ӳ��Ϊ��
"AAJF"������Ϣ����Ϊ(1 1 10 6)
"KJF"������Ϣ����Ϊ(11 10 6)

ע�⣬��Ϣ���ܷ���Ϊ(1 11 06)����Ϊ"06"����ӳ��Ϊ"F"����������"6"��"06"��ӳ���в����ȼۡ�
����һ��ֻ�����ֵķǿ��ַ���s������㲢���ؽ��뷽����������
*/
class Decoding 
{
public:
	int numDecoding(std::string s);
private:
	int binaryTreeTraversal(char chars[], int length, int map[], int index);
};


/*
���ſ����ų�һ�У�ÿ�ſ��ƶ���һ����Ӧ�ĵ�������������������cardPoint s������
ÿ���ж�������Դ��еĿ�ͷ����ĩβ��һ�ſ��ƣ����������������k�ſ��ơ�
��ĵ����������õ����е����п��Ƶĵ���֮�͡�
����һ����������cardPoint s������k�����㷵�ؿ��Ի�õ���������
*/
class MAXScore {
public:
	int maxScore(int cardPoints[], int k);
};


/*��̬�滮
������������ word1 �� word2������������ word1 ת���� word2 ��ʹ�õ����ٲ����� ��
����Զ�һ�����ʽ����������ֲ�����
����һ���ַ�
ɾ��һ���ַ�
�滻һ���ַ�
*/

class MinDistance {
public:
	static int minDistance(string word1, string word2);
	static int minDistance2(string word1, string word2);
};

/*
��̬�滮�ⲻͬ������
����һ���ַ���s��һ���ַ���t��������s����������t���ֵĸ�����

*******************��̬�滮������������Ƕ���״̬���г����ƹ�ʽ���ҳ��߽�������************************************
*/

class MinDistinct {
public:
	static int minDistinct(string s, string t);
};


/*
˫ָ���������
*/
class _2Pt_Plus 
{
public:
	static listnode add2Numbers(listnode listNode1, listnode listNode2);
};


/*��̬�滮�����һ��ʯͷ
��һ��ʯͷ������������stones��ʾ������stones [i]��ʾ��i��ʯͷ��������
ÿ һ �� �� �� �� �� ѡ �� �� �� �� �� ʯ ͷ �� Ȼ �� �� �� �� һ �� �� �� �� 
�� �� ʯ ͷ �� �� �� �� �� Ϊ x ��y����x<=y����ô����Ŀ��ܽ�����£�
���x==y����ô����ʯͷ���ᱻ��ȫ���飻
���x !=y����ô����Ϊx��ʯͷ������ȫ���飬������Ϊy��ʯͷ������Ϊy - x��
������ֻ��ʣ��һ��ʯͷ�����ش�ʯͷ��С�Ŀ������������û��ʯͷʣ�£��ͷ���0��
*/
class LastStonsWeight
{
public:
	static int laststonweight(int stones[]);
};


/*
��������2
*/
class PackageProblem
{
public:
	static int packageProblem1();
	static int packageProblem2();
};

/*
��̬�滮����ͬ·����
һ��������λ��һ�� m * n ��������Ͻ� ����ʼ������ͼ�б��Ϊ��Start�� ����
������ÿ��ֻ�����»��������ƶ�һ������������ͼ�ﵽ��������½�

��Ϊֻ�ܴ����������߹��������Ե��ƹ�ʽ��
dp[i][j]=dp[i -1][j]+dp[i][j -1]��
dp[i -1][j]��ʾ���Ǵ������߹�����·��������
dp[i][j -1]��ʾ���Ǵ�����߹�����·��������
*/
class UNIQUE_Path_with_Obstracles
{
public:
	static int unique_path_with_obstracles(vector<vector<int>> obstracleGrid);
};



/*
��������
�������������� A �� B ���������������й����ġ��������������ĳ��ȡ�

ʾ����
���룺
A: [1,2,3,2,1]
B: [3,2,1,4,7]
�����3
���ͣ�
������Ĺ����������� [3, 2, 1] ��

��ʾ��
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
��תͼ��
����һ��n��n�Ķ�ά����matri x��ʾһ��ͼ�����㽫ͼ��˳ʱ����ת90�ȡ�
��ʾ��
matrix . length==n
matrix [i]. length==n
1<=n<=20
-1000<=matrix [i][j]<=1000
�������ðѾ���˳ʱ����ת90�ȣ���򵥵�һ�ַ�ʽ���������¹��������߷�ת��Ȼ���ٶԽ��߷�ת
*/

class RotateMatrix
{
public:
	void rotate();
};


/*
˫ָ����滻�����ظ��ַ�
����һ�����ɴ�дӢ ���� ĸ��ɵ��ַ�������� �� �� �� �� λ �� �� �� �� �� �� �� �� �� �� �� ��
�����ܹ�������滻k�Ρ���ִ�������������ҵ������ظ���ĸ����Ӵ��ĳ��ȡ�
ע�⣺�ַ������� �� k ���ᳬ�� 10^4��

ʾ�� 1��
���룺s = "ABAB", k = 2
�����4
���ͣ�������'A'�滻Ϊ����'B' ,��֮��Ȼ��
*/

class CharReplace
{
public:
	static int InsteadLongChar(string s, int k);
};


/*
BFS��DFS���ַ�ʽ�����������

����һ��������һЩ0��1�ķǿն�ά����grid ��
һ����������һЩ���ڵ�1(��������)���ɵ���ϣ�����ġ����ڡ�Ҫ������1������ˮ
ƽ������ֱ���������ڡ�����Լ���grid���ĸ���Ե����0������ˮ����Χ�š�
�ҵ������Ķ�ά���������ĵ��������(���û�е��죬�򷵻����Ϊ0��)

*/

class maxAreaOnIsland {
public:
	static int maxAreaOfIsland(vector<vector<int>> grid);
private:
	static int bfs(vector<vector<int>> grid, int i, int j);
};


/*
����һ�����飬���ĵ�i��Ԫ����һ֧������Ʊ��i��ļ۸�
��������ֻ�������һ�ʽ��ף������������һ֧��Ʊһ�Σ������һ���㷨������
�����ܻ�ȡ���������
ע�⣺�㲻���������Ʊǰ������Ʊ��
*/

class maxProfit {
public:
	static int _maxProfit(vector<int>& prices);
};

/*
һ�������İ�Ħʦ���յ�ԴԴ���ϵ�ԤԼ����ÿ��ԤԼ������ѡ��ӻ򲻽ӡ���ÿ��
ԤԼ����֮��Ҫ����Ϣʱ�䣬��������ܽ������ڵ�ԤԼ������һ��ԤԼ�������У���
��Ħʦ�ҵ����ŵ�ԤԼ���ϣ���ԤԼʱ������������ܵķ�������
*/
class Massage {
public:
	static int massage(vector<int>& nums);
};



/*
������һ��m��n�еķ��񣬴����� [0,0] ������ [m-1,n-1] ��һ�������˴����� [0, 0] �ĸ��ӿ�ʼ�ƶ���
��ÿ�ο��������ҡ��ϡ����ƶ�һ�񣨲����ƶ��������⣩��Ҳ���ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�
���磬��kΪ18ʱ���������ܹ����뷽�� [35, 37] ����Ϊ3+5+3+7=18���������ܽ��뷽�� [35, 38]����Ϊ3+5+3+8=19��
���ʸû������ܹ�������ٸ����ӣ�
*/

class MoveCount {
public:
	static int movingCount(int m, int n, int k);


private:
	//�����������
	static int dfs(int i, int j, int m, int n, int k, vector<vector<bool>> visited);
	static int sum(int i, int j);
};


/*
Manacher(������)�㷨
Manacher��1975�귢����һ������ʱ���㷨���������г������ַ����д�����λ�ÿ�ʼ�����л����Ӵ���
ͬ�����㷨Ҳ����������λ�ò���ȫ����������Ӵ�������ʱ�临�Ӷ������Եġ�
*/

class Manacher {
public:
	static string longsPalindrome(string s);
};


/*
ɾ���ַ����е����������ظ���
������Сд��ĸ��ɵ��ַ���S���ظ���ɾ��������ѡ��������������ͬ����ĸ����ɾ�����ǡ�
��S�Ϸ���ִ���ظ���ɾ��������ֱ���޷�����ɾ����
����������ظ���ɾ�������󷵻����յ��ַ������𰸱�֤Ψһ��
*/

class RemoveDuplicates {
public:
	static string removeDuplicates(string s);
};



/*
ջ��ʵ��
*/
template<class T>
class Stack{
private:
	vector<T> elems;

public:
	void push(T const&);  //��ջ
	T pop();						//��ջ
	T top() const;				//����ջ��Ԫ��
	bool empty() const { return elems.empty(); }
};

class IsValidStack {
public:
	static bool isValid(string s);
};


#endif