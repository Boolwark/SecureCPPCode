// author: Seb

#include <iostream>
#include <thread>
#include <vector>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;


int shared_data;

void square_data(int x) {
    shared_data += x * x;
}

void concurrency_error_text() {

    cout << "Concurrency is when multiple threads or processes are executing on the same core.\nHowever, if many threads attempt to access or update a shared resource or data, it can result in errors.\n" << endl;

    cout << "Program example: " << endl;
    cout << "________________________________________________________________________________________________________" << endl;
    cout << "#include <iostream>\n#include <thread>\n#include <vector>\n#include <stdio.h>\n" << endl;
    cout << "using namespace std;\n\nint shared_data;\n\nvoid square_data(int x) {\n    shared_data += x * x;\n}\n" << endl;
    cout << "int main()\n{\n    vector<thread> threads;\n    for (int i = 1; i <= 20; i++) {\n       threads.push_back(thread(&square_data, i));\n    }" << endl; //demonstrate program on console without having to switch to VS
    cout << "    for (auto& th : threads) {\n       th.join();\n    }\n}" << endl;
    cout << "________________________________________________________________________________________________________" << endl;
}

void concurrency_error() {

    cout << "Program example: " << endl;
    cout << "________________________________________________________________________________________________________" << endl;
    cout << "#include <iostream>\n#include <thread>\n#include <vector>\n#include <stdio.h>\n" << endl;
    cout << "using namespace std;\n\nint shared_data;\n\nvoid square_data(int x) {\n    shared_data += x * x;\n}\n" << endl;
    cout << "int main()\n{\n    vector<thread> threads;\n    for (int i = 1; i <= 20; i++) {\n       threads.push_back(thread(&square_data, i));                  << This string stores the value of the squared data into 'stored_data' variable.\n    }" << endl; //demonstrate program on console without having to switch to VS
    cout << "    for (auto& th : threads) {\n       th.join();                  << This string ensures that the threads perform concurrently.\n    }\n}" << endl;
    cout << "________________________________________________________________________________________________________\n" << endl;

    vector<thread> threads;
    for (int i = 1; i <= 20; i++) {
        threads.push_back(thread(&square_data, i));
    }

    for (auto& th : threads) {
        th.join();
    }

    cout << "Shared Data = " << shared_data << endl;
    cout << "The right answer should be 2870, the sum of 1 to 20 squared. In this case, it turns out correctly.";

}

void continue_slide() {
    string key;
    cout << "\n\nContinue? Press Enter";
    getline(cin, key);
    if (key == "") {
        system("cls");
    }
}

int main()
{

    concurrency_error_text();
    continue_slide();
    concurrency_error();
}
