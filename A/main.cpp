#include <iostream>
using namespace std;

/* A1a
int arr1[5];

int main() {
    int arr2[5];
    cout << "arr1: ";
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "arr2: ";
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}*/

/*A1b
int arr1[4] = {1, 2, 3, 4};
// int arr1[3] = {1, 2, 3};

int main() {
    int arr2[4] = {1, 2, 3, 4};
    // int arr2[3] = {1, 2, 3};
    cout << "arr1: ";
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "arr2: ";
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}*/

/*A1c
int arr1[] = {1, 2, 3, 4};

int main() {
    int arr2[4];
    // int arr2[];
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        arr2[i] = arr1[i];
    }
    cout << "arr1: ";
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "arr2: ";
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}/*

/*A2a
char cstring1[6];
char cstring2[] = "Hello";
char cstring3[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

int main() {
    char cstring4[6];
    char cstring5[] = "World";
    char cstring6[6] = {'W', 'o', 'r', 'l', 'd', '\0'};
    cout << "C-string 1: ";
    for (int i = 0; i < sizeof(cstring1); ++i) {
        cout << "[" << i << "]=" << static_cast<int>(cstring1[i]) << " ";
    }
    cout << endl;

    cout << "C-string 2: ";
    for (int i = 0; i < sizeof(cstring2); ++i) {
        cout << "[" << i << "]=" << static_cast<int>(cstring2[i]) << " ";
    }
    cout << endl;

    cout << "C-string 3: ";
    for (int i = 0; i < sizeof(cstring3); ++i) {
        cout << "[" << i << "]=" << static_cast<int>(cstring3[i]) << " ";
    }
    cout << endl;

    cout << "C-string 4: ";
    for (int i = 0; i < sizeof(cstring4); ++i) {
        cout << "[" << i << "]=" << static_cast<int>(cstring4[i]) << " ";
    }
    cout << endl;

    cout << "C-string 5: ";
    for (int i = 0; i < sizeof(cstring5); ++i) {
        cout << "[" << i << "]=" << static_cast<int>(cstring5[i]) << " ";
    }
    cout << endl;

    std::cout << "C-string 6: ";
    for (int i = 0; i < sizeof(cstring6); ++i) {
        std::cout << "[" << i << "]=" << static_cast<int>(cstring6[i]) << " ";
    }
    std::cout << std::endl;

    // In dưới dạng xâu kí tự
    std::cout << "C-string 1 (string): " << cstring1 << std::endl;
    std::cout << "C-string 2 (string): " << cstring2 << std::endl;
    std::cout << "C-string 3 (string): " << cstring3 << std::endl;
    std::cout << "C-string 4 (string): " << cstring4 << std::endl;
    std::cout << "C-string 5 (string): " << cstring5 << std::endl;
    std::cout << "C-string 6 (string): " << cstring6 << std::endl;

    return 0;
}*/

/* A2b
// Khai báo và khởi tạo C-string ngoài hàm main()
char str1[] = "abcd";

int main() {
    // Khai báo và khởi tạo C-string trong hàm main()
    char str2[] = "abcd";

    // In nội dung của C-string str1 theo cả hai dạng
    cout << "str1 (lần lượt các phần tử): ";
    for (int i = 0; i < sizeof(str1) - 1; i++) {
        cout << str1[i] << " ";
    }
    cout << endl;

    cout << "str1 (xâu kí tự): " << str1 << endl;

    // In nội dung của C-string str2 theo cả hai dạng
    cout << "str2 (lần lượt các phần tử): ";
    for (int i = 0; i < sizeof(str2) - 1; i++) {
        cout << str2[i] << " ";
    }
    cout << endl;

    cout << "str2 (xâu kí tự): " << str2 << endl;

    return 0;
}*/

/* A3a
int main() {
    // Khai báo và khởi tạo mảng theo cách 1
    char daytab1[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    // In mảng daytab1 thành dạng bảng 2 dòng 12 cột
    cout << "Mảng daytab1: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytab1[i][j]) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Khai báo và khởi tạo mảng theo cách 2
    char daytab2[2][12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
        31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    // In mảng daytab2 thành dạng bảng 2 dòng 12 cột
    cout << "Mảng daytab2: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytab2[i][j]) << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}*/

/* A3b
int main() {
    // Khởi tạo mảng daytab theo cách 1
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    std::cout << "daytab1 (Full Initialization):" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cout << static_cast<int>(daytab1[i][j]) << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Khởi tạo mảng daytab theo cách 2
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };

    std::cout << "daytab2 (Partial Initialization):" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cout << static_cast<int>(daytab2[i][j]) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}*/

/*A4a
int main() {
    char arr[4] = {'a', 'b', 'c', 'd'};
    char var1 = 'e';
    char var2 = 'f';

    // Đọc giá trị các phần tử mảng có chỉ số -1, N, N+1
    cout << "Giá trị các phần tử mảng:" << endl;
    cout << "arr[-1]: " << arr[-1] << endl;
    cout << "arr[4]: " << arr[4] << endl;
    cout << "arr[5]: " << arr[5] << endl;

    // Đọc giá trị của biến var1 và var2
    cout << "Giá trị biến var1: " << var1 << endl;
    cout << "Giá trị biến var2: " << var2 << endl;

    return 0;
}*/

/*A4b
int main() {
    char arr[5] = { 'A', 'B', 'C', 'D', 'E' };
    char variable1 = 'X';
    char variable2 = 'Y';

    // Truy cập và ghi tràn mảng
    arr[-1] = 'Z';
    arr[5] = 'W';
    arr[6] = 'V';

    // In giá trị của các biến
    std::cout << "Variable 1: " << variable1 << std::endl;
    std::cout << "Variable 2: " << variable2 << std::endl;

    return 0;
}*/

/*A5
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int N = 10;
    char str[N];

    cout << "Nhập chuỗi kí tự (không chứa kí tự trắng) có độ dài nhỏ hơn " << N << ": ";
    cin >> str;
    cout << "Chuỗi đã nhập: " << "_" << str << "_" << endl;

    cin.ignore(); // Xóa bộ nhớ đệm của cin để chuẩn bị cho việc đọc chuỗi mới

    cout << "Nhập chuỗi kí tự (không chứa kí tự trắng) có độ dài bằng " << N << ": ";
    cin >> str;
    cout << "Chuỗi đã nhập: " << "_" << str << "_" << endl;

    cin.ignore(); // Xóa bộ nhớ đệm của cin để chuẩn bị cho việc đọc chuỗi mới

    cout << "Nhập chuỗi kí tự (không chứa kí tự trắng) có độ dài lớn hơn " << N << ": ";
    cin >> str;
    cout << "Chuỗi đã nhập: " << "_" << str << "_" << endl;

    return 0;
}*/

/* C

int main() {
    int N;
    cout << "Enter the value of N (1 <= N <= 10000): ";
    cin >> N;

    vector<bool> seen(N + 1, false);

    bool hasDuplicates = false;
    int num;
    for (int i = 0; i < N; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num;

        if (seen[num]) {
            hasDuplicates = true;
            break;
        }

        seen[num] = true;
    }

    if (hasDuplicates) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}


