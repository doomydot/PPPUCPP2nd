#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

void keep_window_open(){
    string temp;
    cin >> temp;
}

int main(){
    
    try{
        
        //Fragment 1 (Compile-time error)
        //Original:     Cout << "Success!\n";
        //Errors:       
        //              identifier "Cout" is undefined 
        cout << "1. Success!\n";


        //Fragment 2 (Compile-time error)
        //Original:     cout << "Success!\n;
        //Errors:       
        //              missing closing quote
        //              expected a ';'
        cout << "2. Success!\n";


        //Fragment 3 (Compile-time error)
        //Original:     cout << "Success" << !\n";
        //Errors:       
        //              unrecognized token
        //              missing closing quote
        cout << "3. Success" << "!\n";


        //Fragment 4 (Compile-time error)
        //Original:     cout << success << '\n';
        //Errors:       identifier "success" is undefined
        cout << "4. Success!" << '\n';


        //Fragment 5 (Compile-time error)
        //Original:     string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        //Errors:       
        //              no suitable constructor exists to convert from "int" to "std::basic_string<char, std::char_traits<char>, std::allocator<char>>"
        //              no suitable conversion function from "std::string" to "int" exists
        int res = 7; 
        vector<int> v(10); 
        v[5] = res; 
        cout << "5. Success!\n";


        //Fragment 6 (Compile-time error and logical error)
        //Original:     vector<int> v6(10); v6(5) = 7; if (v6(5) != 7) cout << "Success!\n";
        //Errors:       
        //              call of an object of a class type without appropriate operator() or conversion functions to pointer-to-function type
        vector<int> v6(10); 
        v6[5] = 7; 
        if (v6[5] == 7) 
            cout << "6. Success!\n";


        //Fragment 7 (Compile-time error)
        //Original:     if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        //Errors:
        //              identifier "cond" is undefined
        bool cond = true;
        if (cond)
            cout << "7. Success!\n"; 
        else 
            cout << "Fail!\n";


        //Fragment 8 (Logical error)
        //Original:     bool c8 = false; if (c8) cout << "Success!\n"; else cout << "Fail!\n";
        //Errors:
        //              prints fail instead of success
        bool c8 = false;
        if (!c8) 
            cout << "8. Success!\n"; 
        else 
            cout << "Fail!\n";


        //Fragment 9 (Logical error)
        //Original:     string s9 = "ape"; bool c9 = "fool"<s9; if (c9) cout << "Success!\n";
        //Errors: 
        //              Doesn't print success as fool is greater than ape
        string s9 = "ape";
        bool c9 = "fool" > s9; 
        if (c9) 
            cout << "9. Success!\n";
        

        //Fragment 10 (Logical error)
        //Original:     string s10 = "ape"; if (s10 == "fool") cout << "Success!\n";
        //Errors:
        //              Doesn't print as the conditional is false
        string s10 = "ape";
        if (s10 != "fool") 
            cout << "10. Success!\n";
        
        
        //Fragment 11 (Compile-time error and Logical Error)
        //Original:     string s11 = "ape"; if (s11 == "fool") cout < "Success!\n"; 
        //Errors:   
        //              no operator "<" matches these operands
        //              operand types are: std::ostream < const char [10]
        //              
        //              doesn't print as the conditional is false
        string s11 = "ape"; 
        if (s11 != "fool") 
            cout << "11. Success!\n"; 
        
        
        //Fragment 12 (Compile-time error)
        //Original:     string s12 = "ape"; if (s12 + "fool") cout < "12. Success!\n";
        //Errors:
        //              expression must have bool type (or be convertible to bool)
        //              no operator "<" matches these operands
        string s12 = "ape";
        if (s12 != "fool") 
            cout << "12. Success!\n";
        
        //Fragment 13 (Logical error)
        //Original:     vector<char> v13(5); for (int i=0; 0<v13.size(); ++i) cout << "13. Success!\n";
        //Errors:
        //              comparison part of for loop uses 0 instead of i

        vector<char> v13(5);
        for (int i = 0; 0 < v13.size(); ++i) 
            cout << "13. Success!\n";
        
        
        //Fragment 14
        //Original:     vector<char> v14(5); for (int i=0; i<=v14.size(); ++i) cout << "14. Success!\n";
        //vector<char> v14(5); for (int i=0; i<=v14.size(); ++i) cout << "14. Success!\n";
        
        
        //Fragment 15
        //Original:     string s15 = "Success!\n"; for (int i=0; i<6; ++i) cout << s15[i];
        //string s15 = "Success!\n"; for (int i=0; i<6; ++i) cout << s15[i];
        
        
        //Fragment 16
        //Original:     if (true) then cout << "Success!\n"; else cout << "Fail\n";
        //if (true) then cout << "Success!\n"; else cout << "Fail\n";
        
        
        //Fragment 17
        //Original:     int x17 = 2000; char c17 = x17; if (c17 == 2000) cout << "17. Success!\n";
        //int x17 = 2000; char c17 = x17; if (c17 == 2000) cout << "17. Success!\n";
        
        
        //Fragment 18
        //Original:     string s18 = "18. Success!\n"; for (int i=0; i<1109; ++i) cout << s18[i];
        //string s18 = "18. Success!\n"; for (int i=0; i<1109; ++i) cout << s18[i];
        
        
        //Fragment 19
        //Original:     vector v19(5); for (int i=0; i<=v19.size(); ++i) cout << "19. Success!\n";
        //vector v19(5); for (int i=0; i<=v19.size(); ++i) cout << "19. Success!\n";
        
        
        //Fragment 20
        //Original:     int i20 = 0; int j20 = 9; while (i20 < 10) ++j20; if (j20 < i20) cout << "20. Success!\n";
        //int i20 = 0; int j20 = 9; while (i20 < 10) ++j20; if (j20 < i20) cout << "20. Success!\n";
        
        
        //Fragment 21
        //Original:     int x21 = 2; double d21 = 5/(x21-2); if (d21 == 2*x21+0.5) cout << "21. Success!\n";
        //int x21 = 2; double d21 = 5/(x21-2); if (d21 == 2*x21+0.5) cout << "21. Success!\n";
        
        
        //Fragment 22
        //Original:     string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        //string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        
        
        //Fragment 23
        //Original:     int i23 = 0; while (i23 < 10) ++j23; if (j23 < i23) cout << "23. Success!\n";
        //int i23 = 0; while (i23 < 10) ++j23; if (j23 < i23) cout << "23. Success!\n";
        
        
        //Fragment 24
        //Original:     int x24 = 4; double d24 = 5/(x24-2); if (d24 = 2*x24+0.5) cout << "24. Success!\n";
        //int x24 = 4; double d24 = 5/(x24-2); if (d24 = 2*x24+0.5) cout << "24. Success!\n";
        
        
        //Fragment 25
        //Original:     cin << "25. Success!\n";
        //cin << "25. Success!\n";



        keep_window_open();
        return 0;
    }

    catch (exception& e){
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }

    catch (...){
        cerr << "error: unknown exception\n";
        keep_window_open();
        return 2;
    }
    






}