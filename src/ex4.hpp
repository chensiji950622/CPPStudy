/*
题目描述:
给出一个长度不超过1000的字符串，判断它是不是回文(顺读，逆读均相同)的。
题目链接: https://www.nowcoder.com/practice/df00c27320b24278b9c25f6bb1e2f3b8?tpId=40&tqId=21559&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
*/


#include<iostream>
#include<string>

struct EX4
{
    static std::string algorithm(const std::string& input)
    {
        bool ret = true;
        size_t len = input.size();
        for(size_t i=0; i<len/2; ++i){
            if(input[i] != input[len-i-1]){
                ret = false;
                break;
            }
        }
        return ret ? std::string("Yes!") : std::string("No!");
    }
};

struct EX4_Answer
{
    static void main()
    {
        std::string input;
        while (std::cin >> input)
        {
            std::cout << EX4::algorithm(input);
        }
    }
};