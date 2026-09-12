#include <iostream>
#include <vector>
#include <string>

// 我的第一个 GitHub 仓库示例程序
int main() {
    std::cout << "Hello, GitHub!修改" << std::endl;
    std::cout << "--------------------" << std::endl;

    std::vector<std::string> todos = {
        "1. 把本地代码提交到 git",
        "2. 创建一个 GitHub 远程仓库",
        "3. 把代码推上去"
    };

    for (const auto& item : todos) {
        std::cout << item << std::endl;
    }

    std::cout << "--------------------" << std::endl;
    std::cout << "推成功之后，你就算入门了。" << std::endl;
    return 0;
}