#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

string summary_csv;
string input_csv;
string case_dir;

void SolveQ1()
{
    cout << "===SolveQ1===" << endl;
}

void SolveQ2(string& win_csv)
{
    cout << "===SolveQ2===" << endl;
}

void SolveQ3(std::vector<string>& file_name)
{
    cout << "===SolveQ3===" << endl;
}

// Q1: ./exe_name case{x}/Q1 -o summary.csv
// Q2: ./exe_name case{x}/Q2 -windows case{x}/Q2/input_windows.csv -o summary_windows.csv
// Q3: ./exe_name case{x}/Q3 -merge -o summary_merge.csv
int main(int argc,char* argv[])
{
    int problem_id=1;
    int opt;
    opterr=0;
    const char *optstring="o:";                             // 短选项字符串
    const option longOptions[] = {                          // 长选项结构体
        {"windows", required_argument, nullptr, 'w'},
        {"merge", 0, nullptr, 'm'},
        {nullptr, 0, nullptr, 0}
    };

    //解析命令行参数
    //找到 "windows" 返回 'w', 找到 "merge" 返回 'm', 找到 "o" 返回 'o', 解析完毕返回 -1
    while((opt = getopt_long_only(argc, argv, optstring, longOptions, nullptr)) != -1){
        switch (opt) {
            case 'o':
                summary_csv = optarg;   //选项 o 对应的参数
                cout << "-o " << summary_csv << endl;
                break;
            case 'w':
                input_csv   = optarg;   //选项 windows 对应的参数
                cout << "-w " << input_csv << endl;
                problem_id  = 2;
                break;
            case 'm':                   //选项 merge
                cout << "-m " << endl;
                problem_id  = 3;
                break;
            default:
                printf("Error argument\n");
                exit(1);
            cout << "switch_out" << endl;
            break;
        }
    }

    // 处理未处理的参数, 即输入文件夹casex/Qx, 如果多于1个就报错
    case_dir = argv[optind];

    if(optind < (argc-1))
    {
        cout << "too many argument:";
        for(int i=optind; i<argc; ++i){
            cout << argv[i] << '\t';
        }
        cout << endl;
    }

    // 根据解析得到的 id 进行不同的操作
    switch (problem_id) 
    {
        case 1:SolveQ1();break;
        case 2:SolveQ2(input_csv);break;
        case 3:{
            vector<string>filename;
            // scan_one_dir((case_dir).c_str(), filename);
            SolveQ3(filename);
            break;
        }
        default:break;
    }

    return 0;
}
