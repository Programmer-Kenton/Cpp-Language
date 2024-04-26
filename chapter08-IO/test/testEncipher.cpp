/**
 * @Description 加解密系统
 * @Version 1.0.0
 * @Date 2024/4/10 19:53
 * @Author Kenton
 */


#include "iostream"
#include "fstream"
#include "string"
#include "map"
#include "algorithm"

// 加载并解析码本文件
std::string load_cipher_book(const std::string& cipher_filename){
    std::ifstream file(cipher_filename);
    std::string cipher_book(26,'\0');
    char c;
    for (size_t i = 0;i < 26 && file.get(c);i++) {
        cipher_book[i] = c;
    }
    return cipher_book;
}

// 字符加密替换
char substitute_char_enCode(const std::string& cipher_book, char original_char){
    if (original_char >= 'a' && original_char <= 'z'){
        return cipher_book[original_char - 'a'];
    } else if (original_char >= 'A' && original_char <= 'Z'){
        return cipher_book[tolower(original_char) - 'a'] + 'A';
    } else{
        // 非字母原样输出
        return original_char;
    }
}

// 字符解密替换
char substitute_char_deCode(const std::string& cipher_book,char original_char){
    if (original_char >= 'a' && original_char <= 'z'){
        for (int i = 0; i < cipher_book.size(); ++i) {
            if (cipher_book[i] == original_char){
                return 'a' + i;
            }
        }
    } else if (original_char >= 'A' && original_char <= 'Z'){
        int newChar = tolower(original_char);
        for (int i = 0; i < cipher_book.size(); ++i) {
            if (cipher_book[i] == newChar){
                return 'a' + i - 32;
            }
        }
    } else{
        return original_char;
    }
}


// 文件加密
void encrypt(const std::string& cipher_book,const std::string& input,const std::string& output){
    std::ifstream in_file(input);
    std::ofstream out_file(output);

    std::string line;
    while (std::getline(in_file,line)){
        std::transform(line.begin(),line.end(),line.begin(),[&](char c){
            return substitute_char_enCode(cipher_book, c);
        });
        out_file << line << std::endl;
    }
}

// 文件解密
void decrypt(const std::string& cipher_book,const std::string& input,const std::string& output){
    std::ifstream in_file(input);
    std::ofstream out_file(output);

    std::string line;
    while (std::getline(in_file,line)){
        std::transform(line.begin(),line.end(),line.begin(),[&](char c){
            return substitute_char_deCode(cipher_book, c);
        });
        out_file << line << std::endl;
    }
}

int main(){
    const std::string bookPath = "D:\\C_Study\\WorkSpace\\Cpp_Study\\09shenlan\\chapter08-IO\\test\\CodeBook.txt";
    const std::string &cipher_book = load_cipher_book(bookPath);

    const std::string Content = "D:\\C_Study\\WorkSpace\\Cpp_Study\\09shenlan\\chapter08-IO\\test\\content.txt";
    const std::string deFile = "D:\\C_Study\\WorkSpace\\Cpp_Study\\09shenlan\\chapter08-IO\\test\\deFile.txt";
    const std::string enFile = "D:\\C_Study\\WorkSpace\\Cpp_Study\\09shenlan\\chapter08-IO\\test\\enFile.txt";

    encrypt(cipher_book, Content, enFile);

    decrypt(cipher_book,enFile,deFile);
}