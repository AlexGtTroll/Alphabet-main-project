#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <sstream>

using namespace std;


void textchanger(string& line, vector<string>& sentence) 
{
    stringstream ss(line);
    string develop = "";
    while (!ss.eof()) {
        string temp;
        ss >> temp;
        develop += temp + " ";
        develop += "* ";
    }
    string del("* ");
    size_t next;
    size_t prev = 0;
    size_t delta = del.length();
    while ((next = develop.find(del, prev)) != string::npos) {
        string temp = develop.substr(prev, next - prev);
        sentence.push_back(develop.substr(prev, next - prev));
        prev = next + delta;
    }
    string temp = develop.substr(prev);
    cout << temp << endl;
    for (int i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == "") {
            sentence.erase(sentence.begin() + i);
        }
    }
    sentence.push_back(develop.substr(prev));
    cout << endl;
}

void textchanger(string& line, string& x) 
{
    stringstream ss(line);
    string develop = "";
    vector<string> sentence;
    while (!ss.eof()) {
        string temp;
        ss >> temp;
        develop += temp + " ";
        develop += "* ";
    }
    string del("* ");
    size_t next;
    size_t prev = 0;
    size_t delta = del.length();
    while ((next = develop.find(del, prev)) != string::npos) {
        string temp = develop.substr(prev, next - prev);
        sentence.push_back(develop.substr(prev, next - prev));
        prev = next + delta;
    }
    string temp = develop.substr(prev);
    cout << temp << endl;
    for (unsigned int i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == "") {
            sentence.erase(sentence.begin() + i);
        }
    }
    sentence.push_back(develop.substr(prev));
    cout << endl;
}

bool IsParenthesesOrDash(char c) 
{
    switch (c) {
    case '(':
    case ')':
    case '-':
    case '_':
    case ',':
    case '.':
    case '/':
    case '\\':
    case '|':
    case ':':
    case ';':
    case '"':
    case '+':
    case '%':
    case '&':
    case '[':
    case ']':
    case '{':
    case '}':
    case '~':
    case '?':
    case '!':
    case '^':
    case '*':
    case '=':
    case '–':
    case '»':
    case '«':
    case '…':
        return true;
    default:
        return false;
    }
}

void supereraser(string& sentence, int& check) 
{
    sentence.erase(
            remove_if(sentence.begin(), sentence.end(), &IsParenthesesOrDash),
            sentence.end());
    check = 1;
}

void choose(string& x, int& check) 
{
    if (x == "help") {
        check = 1;
    } else {
        size_t pos = x.find("string");
        bool str = false;
        if (pos != string::npos)
            str = true;
        if (str == true) {
            check = 2;
        } else {
            pos = x.find("file");
            bool file = false;
            if (pos != string::npos)
                file = true;
            if (file == true) {
                check = 3;
            }
        }
    }
    cout << endl;
}

void assistant(int& check) 
{
    cout << "The program for sorting text works as follows:" << endl
         << "-d  --  sorting without repetition" << endl;
    cout << "-A -- case-sensitive text sorting. Uppercase letters are changed "
            "to "
            "lowercase."
         << endl;
    cout << "-r -- conclusion from the end. Write to file from the end."
         << endl;
    cout << "Parameters can be written in any order, example: -d -A -r, -r -A, "
            "-A -d;"
         << endl;
    cout << "|| If none of the parameters is specified, then normal sorting "
            "will "
            "occur ||"
         << endl;
    cout << "If you are working with a .txt file containing Russian letters, "
            "you "
            "must change the file encoding to ANSI"
         << endl;
    cout << "Otherwise, at the exit you will receive an ancient elven language"
         << endl;
    cout << "After you have specified the parameter, write what the program "
            "should work with"
         << endl;
    cout << "Example: -d -A string - work with string. -d -A file - work with "
            "file"
         << endl;
    check = 1;
}

void textsort(vector<string>& sentence, vector<string>& sentenced) 
{
    set<string> nodubls;
    for (vector<string>::iterator m = sentence.begin(); m != sentence.end();
         ++m)
        nodubls.insert(*m);

    vector<string> sentenced(nodubls.begin(), nodubls.end());
    nodubls.clear();
}

void textsortfull(vector<string>& sentence, vector<string>& sentenced) {
    multiset<string> sorted;
    for (vector<string>::iterator m = sentence.begin(); m != sentence.end();
         ++m)
        sorted.insert(*m);

    vector<string> sentenced(sorted.begin(), sorted.end());
    sorted.clear();
}

TEST(ASSISTANT, function_working) 
{
    int check = 0;
    assistant(check);
    ASSERT_EQ(1, check); /// if assistant working
}

TEST(CHOOSE, right_working) 
{
    int check = 0;

    string x = "help";
    choose(x, check);
    ASSERT_EQ(1, check); //// if help found

    x = "string";
    choose(x, check);
    ASSERT_EQ(2, check); //// if string found

    x = "file";
    choose(x, check);
    ASSERT_EQ(3, check); //// if file found

    x = "help string file";
    choose(x, check);
    ASSERT_EQ(1, check); //// if help found

    x = " ";
    choose(x, check);
    ASSERT_EQ(0, check); //// if help found
}
<<<<<<< HEAD

TEST(DELETE, symbols_delete) 
{
    int check = 0;
    string sentence;
    sentence = "m&y n$am#e is#( zh))ora";
    supereraser(sentence, check);

    ASSERT_EQ(1, check); ////if supereraser fulfilled

    EXPECT_THAT(sentence, "my name is zhora"); ///// if supereraser works fine
    sentence = "my name is zhora";
    EXPECT_THAT(sentence, "my name is zhora");

    sentence = "";
}

TEST(TEXTCHANGER, string_to_vector) 
{
    string line = "shady please stand up";
    vector<string> sentence;
    textchanger(line, sentence);
    EXPECT_THAT(sentence[0], "shady ");
    EXPECT_THAT(sentence[1],  "please ");
    EXPECT_THAT(sentence[2], "stand ");
    EXPECT_THAT(sentence[3], "up ");

    clear.sentence();
    line = "";
}

TEST(SORTING, dedubl_sort_tester) 
{
    vector<string> sentence
            = {"my", "name", "is", "slim", "shady", "name", "is", "my"};
    vector<string> sentenced;
    textsort(sentence, sentenced);
    EXPECT_THAT(sentenced[0], "is");
    EXPECT_THAT(sentenced[1], "my");
    EXPECT_THAT(sentenced[2], "name");
    EXPECT_THAT(sentenced[3], "please");
    EXPECT_THAT(sentenced[4], "shady");
}

TEST(SORTINGFULL, sortfull_tester) 
{
    vector<string> sentence
            = {"my", "name", "is", "slim", "shady", "name", "is", "my"};
    vector<string> sentenced;
    textsortfull(sentence, sentenced);
    EXPECT_THAT(sentenced[0],"is");
    EXPECT_THAT(sentenced[1],"is");
    EXPECT_THAT(sentenced[2],"my");
    EXPECT_THAT(sentenced[3],"my");
    EXPECT_THAT(sentenced[4],"name");
    EXPECT_THAT(sentenced[5],"name");
    EXPECT_THAT(sentenced[6],"shady");
    EXPECT_THAT(sentenced[7],"slim");
}
||||||| 0c4166d

TEST(DELETE, symbols_delete) 
{
    int check = 0;
    string sentence;
    sentence = "m&y n$am#e is#( zh))ora";
    supereraser(sentence, check);

    ASSERT_EQ(1, check); ////if supereraser fulfilled

    ASSERT_STREQ("my name is zhora", sentence); ///// if supereraser works fine
    sentence = "my name is zhora";
    ASSERT_STREQ("my name is zhora", sentence);

    sentence = "";
}

TEST(TEXTCHANGER, string_to_vector) 
{
    string line = "shady please stand up";
    vector<string> sentence;
    textchanger(line, sentence);
    ASSERT_STREQ("shady ", sentence[0]);
    ASSERT_STREQ("please ", sentence[1]);
    ASSERT_STREQ("stand ", sentence[2]);
    ASSERT_STREQ("up ", sentence[3]);

    clear.sentence();
    line = "";
}

TEST(SORTING, dedubl_sort_tester) 
{
    vector<string> sentence
            = {"my", "name", "is", "slim", "shady", "name", "is", "my"};
    vector<string> sentenced;
    textsort(sentence, sentenced);
    ASSERT_STREQ("is", sentenced[0]);
    ASSERT_STREQ("my", sentenced[1]);
    ASSERT_STREQ("name", sentenced[2]);
    ASSERT_STREQ("please", sentenced[3]);
    ASSERT_STREQ("shady", sentenced[4]);
}

TEST(SORTINGFULL, sortfull_tester) 
{
    vector<string> sentence
            = {"my", "name", "is", "slim", "shady", "name", "is", "my"};
    vector<string> sentenced;
    textsortfull(sentence, sentenced);
    ASSERT_STREQ("is", sentenced[0]);
    ASSERT_STREQ("is", sentenced[1]);
    ASSERT_STREQ("my", sentenced[2]);
    ASSERT_STREQ("my", sentenced[3]);
    ASSERT_STREQ("name", sentenced[4]);
    ASSERT_STREQ("name", sentenced[5]);
    ASSERT_STREQ("shady", sentenced[6]);
    ASSERT_STREQ("slim", sentenced[7]);
}
=======
>>>>>>> 4d3877f3a2bc319da992444c85044adfea6a823c
