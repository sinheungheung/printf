#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for (auto i : strlist)
        answer.push_back(i.length());
    return answer;
}