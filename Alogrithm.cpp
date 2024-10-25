// Alogrithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include "Alogrithm.h"
#include <math.h>


/// <summary>
/// 按照delim整体分隔字符串s
/// </summary>
/// <param name="s">要分隔的字符串</param>
/// <param name="delim">分隔符</param>
/// <returns></returns>
vector<string> split(string s, string delim)
{
    vector<string> v;
    int loc;
    while ((loc = s.find(delim)) != string::npos) {
        if (loc != 0) {
            v.push_back(s.substr(0, loc));
        }
        s = s.substr(loc + delim.size());
    }

    if (s.size() > 0) {
        v.push_back(s);
    }

    return v;
}

int main()
{

    std::cout << "####################Alogrithm program####################\n";

    char word[MAX_STRING_LEN];
    memset(word, 0, sizeof(word));

    //1.Decoding class 
    //std::cout << "Please input num string(do not split it with space)\n";
    //std::string s0;
    //std::cin >> s0;
    //2.Decoding dec;
    //int num = dec.numDecoding(s0);
    //sprintf_s(word, "%d", num);
    //std::cout << word << std::endl;

    //3.max scroe
    //int cardPoints[] = { 1,3,4,10,8,2,9,11,13,7,6 };
    //MAXScore maxSrc;
    //int n = maxSrc.maxScore(cardPoints, 5);
    //sprintf_s(word, "%d", n);
    //std::cout << word << std::endl;

    //4.MinDistance
    //std::cout << "Please input 2 word for caculate word1 change to word2, how long steps to instead.(do not split it with space)\nPlease input word1 first:\n";
    //std::string s0, s1;
    //std::cin >> s0;
    //std::cout << "Now, please input word2:" << endl;
    //std::cin >> s1;
    //int nSteps = MinDistance::minDistance(s0, s1);
    //sprintf_s(word, "%d", nSteps);
    //std::cout << word << std::endl;

    //5.MinDistinct
    //std::cout << "给定一个字符串s和一个字符串t，计算在s的子序列中t出现的个数 .\n请输入第1个字符串:\n";
    //std::string s0, s1;
    //std::cin >> s0;
    //std::cout << "请输入第2个字符串:" << endl;
    //std::cin >> s1;
    //int nSteps = MinDistinct::minDistinct(s0, s1);
    //sprintf_s(word, "%d", nSteps);
    //std::cout << word << std::endl;

    //6.双指针两数相加(死循环)
    //listnode lst0, lst1, lst3;
    //lst0.val = 1;
    //lst1.val = 4;
    //lst3.val = 6;
    //lst0.next = &lst1;
    //lst1.next = &lst3;
    //_2Pt_Plus::add2Numbers(lst0, lst1);

    //7.最后一块石头的重量
    //int stones[] = { 1,3,4,10,8,2,9,11,13,7,6 };
    //int n = LastStonsWeight::laststonweight(stones);
    //sprintf_s(word, "%d", n);
    //std::cout << word << std::endl;

    //8.背包问题
    //int PackageNum = PackageProblem::packageProblem1();
    //sprintf_s(word, "Package number::%d", PackageNum);
    //std::cout << word << std::endl;

    //9.动态规划：求不同路径Ⅱ
    //vector<vector<int>>  obstacleGrid(10, vector<int>(10, 0));
    //for(int i = 0; i<10; i++)
    //    for (int j = 0; j < 10; j++)
    //    {
    //        if(i%3==0 || j%2==0)
    //            obstacleGrid[i][j] = 0;
    //        else
    //            obstacleGrid[i][j] = 1;
    //    }
    //int nPath = UNIQUE_Path_with_Obstracles::unique_path_with_obstracles(obstacleGrid);
    //sprintf_s(word, "path number::%d", nPath);
    //std::cout << word << std::endl;

    //10.最长公共子串(滑动窗口)
    //int A[] = {1,2,3,2,1};
    //int B[] = {3,2,1,4};
    //FindLength* fl = new FindLength();
    //int n = fl->findLength(A, B);
    //sprintf_s(word, "最长公共子串:%d", n);
    //std::cout << word << std::endl;
    //delete fl;
    //fl = NULL;

    //11.旋转图像
    //RotateMatrix* RM = new RotateMatrix();
    //RM->rotate();

    //12.双指针解替换后的最长重复字符
    //std::cout << "请先输入一个字符串:\n";
    //std::string s0, s1;
    //std::cin >> s0;
    //std::cout << "请输入可替换次数:" << endl;
    //std::cin >> s1;
    //int k = atoi(s1.c_str());
    //int result = CharReplace::InsteadLongChar(s0, k);
    //sprintf_s(word, "包含重复字母的最长子串的长度:: %d", result);
    //std::cout << word << std::endl;

    //13.dfs求岛屿最大面积
    //int grid[8][13] = { 
    //    { 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0},
    //    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0},
    //    { 0 , 1 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
    //    { 0 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0},
    //    { 0 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 0 , 0},
    //    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0},
    //    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0},
    //    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0} };
    //vector<vector<int>>  Grid(8, vector<int>(13, 0));
    //for (int i = 0; i < 8; i++)
    //{
    //    for (int j = 0; j < 13; j++)
    //    {
    //        Grid[i][j] = grid[i][j];
    //    }
    //}
    //int res = maxAreaOnIsland::maxAreaOfIsland(Grid);
    //sprintf_s(word, "岛屿最大面积:: %d", res);
    //std::cout << word << std::endl;

    //14.股票卖出的最佳时机
    //int i = 0, j = 0;
    //int stocks[] = { 1,3,4,10,8,2,9,11,13,7,6 };
    //j = sizeof(stocks);
    //vector<int> stock(j);
    //for (auto k : stocks)
    //{
    //    stock[i] = stocks[i];
    //    i++;
    //}
    //i = maxProfit::_maxProfit(stock);
    //sprintf_s(word, "股票卖出的最大利润:: %d", i);
    //std::cout << word << std::endl;

    //15.按摩师的最长预约时间
    //int i = 0;
    //int stocks[] = { 2 , 1 , 4 , 5 , 3 , 1 , 1 , 3};
    //vector<int> stock(8);
    //for (auto k : stocks)
    //{
    //    stock[i] = stocks[i];
    //    i++;
    //}
    //int j = Massage::massage(stock);
    //sprintf_s(word, "按摩师的最长预约时间:: %d", j);
    //std::cout << word << std::endl;

    //16.机器人的运动范围
    /*  
    int m = 1, n = 100, k = 0;
    cout << "请先输入机器人的运动范围(m<=100; 1<=n; 0<=k<=20. 以逗号分割3个数字)。:\n 注：m行n列的方格，行坐标和列坐标的数位之和不大于k的格子。\t\n";
    string s;
    
ONCEMORE_INPUT:
    cin >> s;

    vector<string> vs = split(s, ",");
    m = atoi(vs[0].c_str());
    n = atoi(vs[1].c_str());
    k = atoi(vs[2].c_str());
    if ((m < 1 || m>100) || (n < 1 || n>100) || (k < 0 || k>20))
    {
        cout << "输入数值超出给定范围, 请重新输入。" << endl;
        goto ONCEMORE_INPUT;
    }
    int j = MoveCount::movingCount(m, n, k);

    sprintf_s(word, "机器人的运动范围:: %d", j);
    std::cout << word << std::endl;*/


    //17.Manacher(回文字符串算法)
    //string s, s1;
    //cout << "请输入回文字符串，计算最大回文半径(英文输入)" << endl;
    //cin >> s;
    //
    //s1 = Manacher::longsPalindrome(s);
    //sprintf_s(word, "最大回文:: %s", s1.c_str());
    //cout << word << std::endl;

    //18.删除字符串中的所有相邻重复项
    //string s, s1;
    //cout << "请输入字符串(将去除字符串中的重复字符)" << endl;
    //cin >> s;

    //s1 = RemoveDuplicates::removeDuplicates(s);
    //sprintf_s(word, "删除重复字符后的字符串::\t\n%s", s1.c_str());
    //cout << word << std::endl;

    //19.栈的应用
    string s;
    cout << "验证括号的有效性，括号只包含(，)，[，]，{，}这6个字符，比如()，{()}，[](){}都是有效的，而{]，{(]}都是无效的" << endl;
    cin >> s;

    if (IsValidStack::isValid(s))
        cout << "括号有效" << endl;
    else
        cout << "括号无效" << endl;

}

//////////////动态规划解码方法///////////////////////////////////////
int Decoding::numDecoding(std::string s)
{
    //使用名为map的数组存储
    int nStrLen = s.length();
    if (nStrLen > MAX_STRING_LEN || nStrLen<=0)
    {
        std::cout << "Input string length over range(1 ~ 128)" << std::endl;
        return 0;
    }

    int map[MAX_STRING_LEN];
    //默认值赋值为-1
    memset(map, -1, MAX_STRING_LEN);

    return binaryTreeTraversal((char*)s.c_str(), s.length(), map, 0);
}

//我们把它看做遍历一颗二叉树，index表示访问字符的位置
int Decoding::binaryTreeTraversal(char chars[], int length, int map[], int index) 
{
    //递归的终止条件，到叶子节点了，所有的字符都遍历完了，
    //说明找到了一种解码的方法，直接返回1
    if (index >= length)
        return 1;
    //查看有没有计算过，如果计算过了就从map中取
    if (map[index] != -1)
        return map[index];

    //单个0是不能构成字符的，要跳过，但两个数字的比如10，20是可以构成字符的，
    //两个数字的在上一步就已经截取了。
    if (chars[index] == '0')
        return 0;

    //上面类似于二叉树遍历终止条件的判断，下面类似于遍历二叉树的两个分支

    //截取一个数字的分支（类似于二叉树的左分支）
    int res = binaryTreeTraversal(chars, length, map, index + 1);
    //截取两个数字的分支（类似于二叉树的右分支），截取两个数字
    //必须要小于等于26，所以这个需要判断一下
    if (index < length - 1 && (chars[index] == '1'|| (chars[index] == '2' && chars[index + 1] <= '6')))
        res += binaryTreeTraversal(chars, length, map, index + 2);
    //把计算的结果存储到map中
    map[index] = res;
    return res;
}

int MAXScore::maxScore(int cardPoints[], int k) 
{
    int maxWindow = 0, length = 0;

    int* ptr = &cardPoints[0];
    while (*ptr++)
        length++;
    
    //先统计前k个元素的和，也是窗口内元素的和
    for (int i = 0; i < k; i++)
        maxWindow += cardPoints[i];

    //然后窗口移动，更新当前窗口的值
    int curWindow = maxWindow;
    for (int i = length - 1; i >= length - k; i--) 
    {
        //窗口移动的时候一个元素会出窗口，一个元素会进入窗口。
        //cardPoints[k - (length - i)]是移除窗口的元素
        curWindow -= cardPoints[k - (length - i)];
        //cardPoints[i]是进入窗口的元素
        curWindow += cardPoints[i];
        //记录窗口的最大值
        maxWindow = std::max(maxWindow, curWindow);
        
    }
    return maxWindow;    
}

//动态规划：字符替换，最小次数
int MinDistance::minDistance(string word1, string word2)
{
    int length1 = word1.length();
    int length2 = word2.length();

    if (length1 * length2 == 0) //如果有一个字符串为空，返回另一个字符串长度
        return length1 + length2;
    
    //int (*dp)[length1] = malloc(sizeof(int[length1+1][length2+1]));
    /*利用malloc申请内存,创建二维数组*/
    //int** dp = (int**)malloc(sizeof(int*) * (length1+1)); // 分配行
    //for (int x = 0; x <= length1; x++)
    //    dp[x] = (int*)malloc(sizeof(int) * (length2+1)); // 分配列

    vector<vector<int>> dp(length1 + 1, vector<int>(length2 + 1, 0));

    for (int i = 0; i <= length1; i++)
        dp[i][0] = i; //边界条件，相当于word1的删除操作

    for (int i = 0; i <= length2; i++)
        dp[0][i] = i; //边界条件，相当于word1中的添加操作

    for (int i = 1; i <= length1; i++)
    {
        for (int j = 1; j <= length2; j++)
        {
            if (word1[i - 1] == word2[j - 1]) //判断连个字符是否相等
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min( min( dp[i-1][j], dp[i][j-1] ), dp[i-1][j-1]) + 1;
        }
    }
    int r = dp[length1][length2];

    //for (int i = 0; i < length1; i++)
    //    free(dp[i]);
    //free(dp);

    return r;
}

int MinDistance::minDistance2(string word1, string word2)
{
    int length1 = word1.length();
    int length2 = word2.length();

    if (length1 * length2 == 0)
      return length1 + length2;

    int* dp = (int*)malloc(sizeof(int) * (length2 + 1));
    for (int i = 1; i <= length2; i++)
    {
        dp[i] = i;
    }

    int last = 0;
    for (int i = 1; i <= length1; i++)
    {
        last = dp[0];
        dp[0] = i;

        for (int j = 1; j <= length2; j++)
        {
            int temp = dp[j];
            if (word1[i - 1] == word2[j - 1]) 
            {
                dp[j] = last;
            }
            else 
            {
                dp[j] = min(min(dp[j - 1], dp[j]), last) + 1;  
            }
            last = temp;           
        }
        printf("%d\n", *dp); //这行代码仅做测试打印数据使用，可删除   
    }

    int nValue = *dp + length2;
    free(dp);

    return nValue;     //dp[length2];
}

//动态规划：解不同子序列
int MinDistinct::minDistinct(string s, string t)
{
    int sLength = s.length();
    int tLength = t.length();

    //int** dp = (int**)malloc(sizeof(int*) *(tLength + 1));
    //for (int j = 0; j <= sLength; j++)
    //    dp[j] = (int*)malloc(sizeof(int) * (sLength + 1));

    vector<vector<int>> dp(tLength + 1, vector<int>(sLength + 1, 0));

    for (int i = 0; i <= sLength; i++)
        dp[0][i] = 1;

    int i, j;
    for (i = 1; i <= tLength; i++)
    {
        for (j = 1; j <= sLength; j++)
        {   //下面是递推公式
            if (t[i - 1] == s[j - 1]) // 如果字符串t的第i个字符和s的第j个字符一样，
            {
                //那么有两种选择
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
            }
            else{ 
                //如果字符串t的第i个字符和s的第j个字符不一样，
                //我们只能用字符串s的前j-1个字符来计算他包含的数量
                dp[i][j] = dp[i][j - 1];
            }
        }
    }

    int r = dp[tLength][sLength];

    //for (int i = 0; i < tLength; i++)
    //    free(dp[i]);
    //free(dp);

    return r;
}

listnode::listnode()
{
    val = 0;
    pre = nullptr;
    cur = nullptr;
    next = nullptr;
}

listnode::listnode(int n, listnode* nx)
{
    val = n;
    next = nx;
    cur = nx;
    pre = nx;
}

//双指针解两数相加
listnode _2Pt_Plus::add2Numbers(listnode listNode1, listnode listNode2)
{
    //创建1个哑节点，指向链表的头节点
    listnode* dummyNode = new listnode(0);
    
    //preNode表示当前节点的前一个节点
    listnode preNode = *dummyNode;

    int carry = 0;

    while (listNode1 != NULL || listNode2 !=NULL) // || carry!=0)
    {
        int sum = carry;

        if (listNode1 != NULL) 
        {
            sum += listNode1.val;
            listNode1 = *listNode1.next;
        }

        if (listNode2 != NULL)
        {
            sum += listNode2.val;
            listNode2 = *listNode2.next;
        }

        //创建新节点，preNode的next指针指向新的节点，因为链表节点
        //只能存储一位数字，所以这里要对sum求余，取个位
        preNode.next = new listnode(sum % 10);

        //如果sum大于等于10，说明有进位，carry为1，
        //否则没有，carry为0
        carry = sum / 10;
        //更新preNode
        preNode = *preNode.next;

    }
    return *(*dummyNode).next;
}

//最后一块石头的重量
int LastStonsWeight::laststonweight(int stones[])
{
    int length=0;
    int* ptr = &stones[0];
    while (*ptr++ > 0)
        length++;

    int sum = 0;
    for (int i=0; i<length; i++)
        sum += stones[i];

    int capacity = sum >> 1;

    //dp[i][j]表示前i个石头放进容量为i的背包所能获取的最大重量
    //int** dp = (int**)malloc(sizeof(int*) * (length + 1));
    //for (int j = 0; j <= capacity; j++) {
    //    dp[j] = (int*)malloc(sizeof(int) * (capacity + 1));
    //    for (int i = 0; i <= length; i++)
    //    {
    //        dp[j][i] = 0;
    //    }
    //}

    vector<vector<int>> dp(length + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i < length; i++) {
        for (int j = 1; j < capacity; j++) {
            //如果背包剩余容量能放下石头stones[i-1], 取把石头stones[i-1]放进背包和不放进背包的最大值
            if (j >= stones[i - 1]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - stones[i - 1]] + stones[i - 1]);
            }
            else
                //背包容量已经放不下石头了
                dp[i][j] = dp[i - 1][j];
        }
    }
    //sum-dp[length][capacity]
    //sum - dp[length][capacity]是一部分，dp[length][capacity]是另一部分，
    // 上面capacity的取值是sum >> 1，往下取整，所以前面的肯定不小于后面的，不需要取绝对值
    int x = (sum - dp[length][capacity]) - dp[length][capacity];

    //for (int i = 0; i <= length; i++)
    //        free(dp[i]);

    return x;

}

//背包问题
int PackageProblem::packageProblem1()
{
    int packageContainWeight = 4;//背包最大容纳重量
    int weight[] = { 1, 4, 3 }; //kg, 鞋，电饭锅，电风扇
    int value[] = { 150, 300, 200 };//¥ 商品价值
    int valueLength = 3;
    int nWeightLength = 3;
    int PackageNum = 0;
    vector <vector<int>> dp(nWeightLength + 1, vector<int>(packageContainWeight + 1, 0));
    
    for (int i = 1; i <= valueLength; i++)
    {
        for (int j = 1; j <= packageContainWeight; j++)
        {
            if (j >= weight[i - 1])
                // max(不选中当前商品 ,  当前商品的价值 +  剩余空间可容纳的价值(选中当前商品));
                dp[i][j] = max(dp[i - 1][j], dp[i-1][j - weight[i-1]] + value[i-1]);
            else
                // 不选中当前商品
                dp[i][j] = dp[i - 1][j];
        }
    }

    PackageNum = dp[nWeightLength][packageContainWeight];

    return PackageNum;
}

int PackageProblem::packageProblem2()
{
    int packageContainWeight = 4;
    int weight[] = { 1, 4, 3 };
    int value[] = { 150, 300, 200 };
    int valueLength = 3;
    int* dp = new int[packageContainWeight + 1];
    int PackageNum = 0;
    
    memset(dp, 0, packageContainWeight + 1);
    for (int i = 1; i <= valueLength; i++)
    {
        for (int j = packageContainWeight; j >= 1; j--) {
            if (j - weight[i - 1] >= 0)
                dp[j] = max(dp[j], dp[j - weight[i - 1]] + value[i - 1]); // max(不选中当前商品 ,  当前商品的价值 +  剩余空间可容纳的价值(选中当前商品));
        }
    }

    PackageNum = dp[packageContainWeight];
    delete[] dp;

    return PackageNum;
}

//求不同路径Ⅱ
int UNIQUE_Path_with_Obstracles::unique_path_with_obstracles(vector<vector<int>>  obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    //第一列初始化
    for (int i = 0; i < m; i++)
    {
        if (obstacleGrid[i][0] == 0)
            dp[i][0] = 1;
        else
            break;
    }
    //第一行初始化
    for (int i = 0; i < n; i++)
    {
        if (obstacleGrid[0][i] == 0)
            dp[0][i] = 1;
        else
            break;
    }
    for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            if (obstacleGrid[i][j] == 0)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

    return dp[m - 1][n - 1];
}

//滑动窗口：给两个整数数组 A 和 B ，返回两个数组中公共的、长度最长的子数组的长度。
int FindLength::findLength(int A[], int B[])
{
    int lengthA = 0, lengthB = 0;
    int* ptrA = &A[0];
    while (*ptrA++ > 0)
        lengthA++;

    int* ptrB = &B[0];
    while (*ptrB++ > 0)
        lengthB++;

    ALength = lengthA;
    BLength = lengthB;

    if (lengthA > lengthB)
        return findLengthHelper(A, B);
    else
        return findLengthHelper(B, A);
}

int FindLength::findLengthHelper(int A[], int B[])
{
    int Max = 0;
    //total是总共运行的次数
    int total = ALength + BLength - 1;

    //下面主要判断数组A和数组B比较的起始位置和比较的长度
    for (int i = 0; i < total; i++)
    {
        int aStart = 0;
        int bStart = 0;
        int len = 0;
        if (i < ALength)//数组A往左移动，数组B不动
        {
            aStart = ALength - i - 1;
            bStart = 0;
            len = i + 1;
        }
        else //数组A不动，数组B往右移动
        {
            aStart = 0;
            bStart = i - ALength + 1;
            len = std::max(BLength - bStart, ALength); //两数组移动后，重叠部分的元素个数
        }
        int maxlen = maxLength(A, B, aStart, bStart, len); //求重叠部分，两数组相同元素个数
        Max = std::max(Max, maxlen);
    }
    return Max;
}

int FindLength::maxLength(int A[], int B[], int aStart, int bStart, int len)
{
    int Max = 0, count = 0;
    for (int i = 0; i < len; i++)
    {
        if (A[aStart + i] == B[bStart + i])
        {
            count++;
            Max = max(Max, count);
        }
        else
            count = 0;
    }   
    return Max;
}

//旋转图像
void RotateMatrix::rotate()
{
    char word[4];
    int length = 4;
    int matrix[4][4] = {{5, 1, 9, 11} ,
                                {2, 4, 8, 10},
                                {13, 3, 6, 7},
                                {15,14,12,16} };
    //先上下交换
    for (int i = 0; i < length/2; i++)
    {
        for (int j = 0; j < length; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[length -i - 1][j];
            matrix[length - i - 1][j] = temp;

            //sprintf_s(word, "%d ", matrix[i][j]);
            //std::cout << word;
        }
       // std::cout << "\n";
    }

  /*  for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            sprintf_s(word, "%d ", matrix[i][j]);
            std::cout << word;
        }
        std::cout << "\n";
    }
     std::cout << endl;
    */

    //再按照对角线交换
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    //显示旋转结果
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            sprintf_s(word, "%d ", matrix[i][j]);
            std::cout << word;
        }
        std::cout << "\n";
    }
    std::cout << endl;
}

int CharReplace::InsteadLongChar(string s, int k)
{
    //字符串长度
    int length = s.length();
    //用来存放对应字母的个数，比如字母A的个数就是map[0],
    //字母B的个数就是map[1].....
    int Map [26];
    memset(Map, 0, sizeof(Map));
    int* MAP = Map;
    //窗口左边的位置
    int left = 0;
    //窗口内曾经出现过相同字母最多的数量
    int maxSameCount = 0;
    //窗口右边的位置
    int right = 0;
    //满足条件最大的窗口，也就是可以替换的最长子串长度
    int maxWindow = 0;

    //窗口的左边先不动，移动右边的位置
    for (; right < length; right++)
    {
        //统计窗口内曾经出现过相同字母最多的数量
        maxSameCount = max(maxSameCount, ++MAP[s[right] - 'A']);
        //如果相同字母最多的数量加上k还小于窗口的大小，说明其他的字母不能全部替换为
       //最多的那个字母，我们要缩小窗口的大小，顺便减去窗口左边那个字母的数量，
       //因为他被移除窗口了，所以数量要减去。
        if (k + maxSameCount < right - left + 1)
        {
            MAP[s[left] - 'A']--;
            left++;
        }
        else //满足条件，要记下最大的窗口
        {
            maxWindow = max(maxWindow, right - left - 1);
        }
    }
    return maxWindow;
}

//求岛屿的最大面积(bfs)
int maxAreaOnIsland::maxAreaOfIsland(vector<vector<int>> grid)
{
    int maxArea = 0;
    for (size_t  i = 0; i < grid.size(); i++)
    {
        for (size_t j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1) //如果当前位置是1,开始计算
            {
                maxArea = max(maxArea, bfs(grid, i, j));
            }
        }
    }
    return maxArea;
}

int maxAreaOnIsland::bfs(vector<vector<int>> grid, int i, int j)
{
    int m = grid.size();
    int n = grid[0].size();
    if (grid[i][j] == 0)
        return 0;
    
    grid[i][j] =  0;
    queue<int> que;
    que.emplace(i);
    que.emplace(j);

    //分别表示右，左，下，上四个方向
    int dirs[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
    int res = 1;
    while (!que.empty()) 
    {
        //poll表示从队列的头部移除一个元素        
        int pos0, pos1;
        pos0= que.front();
        que.pop();
        pos1 = que.front();
        que.pop();

        //从pos坐标的4个方向分别查找
        for (auto dir : dirs)
        {
            int x = dir[0] + pos0;
            int y = dir[1] + pos1;

            char word[20];
            sprintf_s(word, "查找位置::%d,%d", pos0, pos1);
            std::cout << word << std::endl;

            //边界条件判断
            if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == 0)
                continue;
            grid[x][y] = 0;
            res++;

            que.emplace(x);
            que.emplace(y);
        }
    }
    return res;
}

//买卖股票的最佳时机
int maxProfit::_maxProfit(vector<int>& prices)
{
    int length = prices.size();
    if (length == 0)
        return 1;
    ////方法1(动态规划)：
    //int hold = -prices[0]; //持有股票
    //int noHold = 0;//不持有股票
    //for (int i = 1; i < length; i++)
    //{
    //    noHold = std::max(noHold, hold + prices[i]);
    //    hold = std::max(hold, -prices[i]);
    //}
    ////肯定最后手里没有持有股票，利润才会最大
    //return noHold;

    //方法2(双指针)：
    int maxPro = 0; //记录最大利润
    int minPro = prices[0]; //记录数组中访问过的最小值
    for (int j = 1; j < length; j++)
    {
        minPro = std::min(minPro, prices[j]);
        maxPro = std::max(prices[j] - minPro, maxPro);
    }
    return maxPro;
}

//动态规划解按摩师的最长预约时间
int Massage::massage(vector<int>& nums)
{
    int len = nums.size();
    if (len == 0)
        return 1;

    int dp0 = 0;//第一个没接
    int dp1 = nums[0];//第一个接了
    //从第2个开始判断
    for (int i = 1; i < len; i++)
    {
        //防止dp0被修改之后对下面的运算造成影响，这里
        //使用一个临时变量temp先把结果存起来，计算完
        //之后再赋值给dp0
        int temp = std::max(dp0, dp1);
        dp1 = dp0 + nums[i];
        dp0 = temp;
    }
    //
    return std::max(dp0, dp1);
}

//机器人的运动范围
int MoveCount::movingCount(int m, int n, int k)
{
    vector<vector<bool>> visited(MAX_VECTOR_SIZE, vector<bool>(MAX_VECTOR_SIZE, 0)); 
    return dfs(0, 0, m, n, k, visited);
}

int MoveCount::dfs(int i, int j, int m, int n, int k, vector<vector<bool>> visited)
{
     //i >= m || j >= n是边界条件的判断，k < sum(i, j)判断当前格子坐标是否
     // 满足条件，visited[i][j]判断这个格子是否被访问过
    if (i >= m || j >= n || k < sum(i, j) || visited[i][j])
       return 0;
    //标注这个格子被访问过
    visited[i][j] = true;
    //沿着当前格子的右边和下边继续访问
    int x = 1 + dfs(i + 1, j, m, n, k, visited) + dfs(i, j + 1, m, n, k, visited);
    
    char word[MAX_STRING_LEN/2];
    memset(word, 0, sizeof(word));
    sprintf_s(word, "沿着当前格子的右边和下边继续访问:: %d \t\n", x);
    std::cout << word << std::endl;

    return x;
}

int MoveCount::sum(int i, int j)
{
    int sum = 0;
    while (i != 0)
    {
        sum += i % 10;
        i /= 10;
    }
    while (j != 0)
    {
        sum += j % 10;
        j /= 10;
    }
    return sum;
}

//Manacher(马拉车)算法
string Manacher::longsPalindrome(string s)
{
    string s0;
    int charLen = s.size(); //源字符串长度
    int length = charLen * 2 + 1; //添加特殊字符后的长度
    char chars[MANACHER_SIZE];
    char res[2* MANACHER_SIZE + 1];
    int index = 0;

    if (charLen > MANACHER_SIZE)
    {
        cout << "输入的字符串长度应小于10" << endl;
        return string("");
    }
    s0 = s;
    memset(chars, 0, sizeof(chars));
    memcpy(chars, s0.c_str(), charLen);

    //添加特殊字符
    for (int i = 0; i < sizeof(res); i++)
        res[i] = (i % 2) == 0 ? '#' : chars[index++];

    //新建p数组，p[i]表示以res[i]为中心的回文串半径
    int p[MANACHER_SIZE];
    memset(p, 0, sizeof(p));

    //maxRight(某个回文串延伸到的最右边下标)
    //maxCenter(maxRight所属回文串中心下标)
    //resCenter(记录遍历过的最大回文串中心下标)
    //resLen(记录遍历过的最大回文半径)
    int maxRight = 0, maxCenter = 0, resCenter = 0, resLen = 0;
    //遍历字符数组res
    for (int i = 0; i < length; i++)
    {
        p[i] = maxRight > i ? min(maxRight - 1, p[2 * maxCenter - i]) : 1;
        //上面的语句只能确定i~maxRight的回文情况，至于maxRight之后的部分是否对称，
        //就只能一个个去匹配了，匹配的时候首先数组不能越界
        while (i - p[i]>=0 && i+p[i]<length && res[i-p[i]] == res[i + p[i]])
            p[i]++;
        //匹配完之后，如果右边界i + p[i]超过maxRight, 那么就更新maxRight和maxCenter
        if (i + p[i] > maxRight)
        {
            maxRight = i + p[i];
            maxCenter = i;
        }
        //记录最长回文串的半径和中心位置
        if (p[i] > resLen) {
            resLen = p[i];
            resCenter = i;
        }
    }
    //计算最长回文串的长度和开始位置
    resLen = resLen - 1;
    int start = (resCenter - resLen) >> 1;
    s = s0.substr(start, start + resLen);

    //截取最长回文字串
    return s;
}

//删除字符串中的所有相邻重复项
string RemoveDuplicates::removeDuplicates(string s)
{
    int left = 0;
    int right = 0;
    int length = s.size();
    char chars[MAX_STRING_LEN];
    string s0;

    if (length > MAX_STRING_LEN)
    {
        cout << "输入的字符串长度应小于128" << endl;
        return string("");
    }
    memset(chars, 0, sizeof(chars));
    memcpy(chars, s.c_str(), length);

    while (right < length) {
        //先把右边的字符赋值给左边
        chars[left] = chars[right];
        //然后判断左边挨着的两个字符是否相同，
        //如果相同，他们同时消失，也就是left往回退两步
        if (left > 0 && chars[left - 1] == chars[left])
            left -= 2;

        ++right;
        ++left;
    }
    chars[right + 1] = '\0'; //只为消除警告
    s0 = string(chars);

    return s0.substr(0, left);
}


//栈
template <class T>
void Stack<T>::push(T const& elem)
{
    // 追加传入元素的副本
    elems.push_back(elem);
}

template <class T>
T Stack<T>::pop()
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    //备份最后一个元素
    T t = elems.back();

    // 删除最后一个元素
    elems.pop_back();
    // 返回最后一个元素的副本 
    return t;
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本 
    return elems.back();
}

//一组括号字符是否配对
bool IsValidStack::isValid(string s)
{
    Stack<char> stack;

    int length = s.size();
    char chars[MAX_STRING_LEN];    

    if (length > MAX_STRING_LEN)
    {
        cout << "输入的字符串长度应小于128" << endl;
        return false;
    }
    memset(chars, 0, sizeof(chars));
    memcpy(chars, s.c_str(), length);

    for (auto c : chars)
    {
        if (c == '\0')
            break;

        if (c == '(')
            stack.push(')');
        else if (c == '{')
            stack.push('}');
        else if (c == '[')
            stack.push(']');
        else if (stack.empty() || stack.pop() != c)
            return false;
    }
    return stack.empty();
}