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
        for (int i = 0; i < v13.size(); ++i) 
            cout << "13. Success!\n";
        
        
        //Fragment 14 (No error / logical error)
        //Original:     vector<char> v14(5); for (int i=0; i<=v14.size(); ++i) cout << "14. Success!\n";
        //Comment:
        //              No error, though I assume it's suppose to iterate v14.size times so the comparison is wrong.
        
        vector<char> v14(5);
        for (int i=0; i < v14.size(); ++i)
            cout << "14. Success!\n";
        
        
        //Fragment 15 (Logical error)
        //Original:     string s15 = "Success!\n"; for (int i=0; i<6; ++i) cout << s15[i];
        //Error:    
        //              The for loop conditional used a magic number, it should instead
        //              have used the size of s15 as that's what we're iterating through. 
        string s15 = "15. Success!\n";
        for (int i=0; i < s15.size(); ++i)
            cout << s15[i];
        
        
        //Fragment 16 (Compile-time error)
        //Original:     if (true) then cout << "Success!\n"; else cout << "Fail\n";
        //Errors:
        //              identifier "then" is undefined
        //              expected a ';'  
        //Comments:
        //              an if else that can only run one of its execution paths is moot 
        if (true)
            cout << "16. Success!\n";
        else 
            cout << "Fail\n";
        
        
        //Fragment 17 (Logical error)
        //Original:     int x17 = 2000; char c17 = x17; if (c17 == 2000) cout << "17. Success!\n";
        //Comments:
        //              the initialization of c17 is a narrow conversion that causes the condition
        //              of the if statement to not work as expected
        int x17 = 2000;
        int c17 = x17;
        if (c17 == 2000)
            cout << "17. Success!\n";
        
        
        //Fragment 18 (Logical error)
        //Original:     string s18 = "18. Success!\n"; for (int i=0; i<1109; ++i) cout << s18[i];
        //Comments:
        //              Doesn't yield a run-time error, as out of range strings don't throw an exception
        string s18 = "18. Success!\n";
        for (int i = 0; i < s18.size(); ++i)
            cout << s18[i];
        
        
        //Fragment 19 (Compile-time error)
        //Original:     vector v19(5); for (int i=0; i<=v19.size(); ++i) cout << "19. Success!\n";
        //Errors:       
        //              no instance of constructor "std::vector" matches the argument list
        //Comments:
        //              The vector is initialized the wrong way, without having specified a type.
        //              Like in the code snippet a few fragments ago I remove the = from the comparison.
        vector<int> v19(5);
        for (int i = 0; i < v19.size(); ++i)
            cout << "19. Success!\n";
        
        
        //Fragment 20 (Logical error)
        //Original:     int i20 = 0; int j20 = 9; while (i20 < 10) ++j20; if (j20 < i20) cout << "20. Success!\n";
        //Errors:
        //              It will loop forever and i20 will never be larger than j20
        //              if we increase i20 with each iteration instead of j20
        //              it then iterates 10 times and write success on the last iteration
        int i20 = 0;
        int j20 = 9;
        while (i20 < 10)
            ++i20; 
            if (j20 < i20)
                cout << "20. Success!\n";
        
        
        //Fragment 21 (Run-time error)
        //Original:     int x21 = 2; double d21 = 5/(x21-2); if (d21 == 2*x21+0.5) cout << "21. Success!\n";
        //Errors:
        //              Arithmetic exception 
        //Comments:
        //              As x21 = 2, we're dividing by 0 in the double initialization
        //              But I can't even tell what this code is expected to do
        //              I just did minor edits on d21 so the if statement becomes true
        int x21 = 2;
        double d21 = 5.0 / x21 + 2.0;
        if (d21 == 2 * x21 + 0.5)
            cout << "21. Success!\n";
        
        
        //Fragment 22 (Compile-time error and logical error)
        //Original:     string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        //Errors:
        //              type "std::string" may not have a template argument list
        //Comments:
        //              After fixing the string it runs, but it executes one iteration
        //              too much. We replace the magic constant 10 with the length of the string.
        string s = "22. Success!\n";
        for (int i = 0; i < s.size(); ++i)
            cout << s[i]; 
        
        
        //Fragment 23 (Compile-time error and logical error)
        //Original:     int i23 = 0; while (i23 < 10) ++j23; if (j23 < i23) cout << "23. Success!\n";
        //Errors:
        //              identifier "j23" is undefined
        //Comments:
        //              Just defining j23 creates an infinite loop
        //              incrementing i23 instead of j23 solves the problem
        int j23 = 0;
        int i23 = 0;
        while (i23 < 10)
            ++i23;
            if (j23 < i23)
                cout << "23. Success!\n";
        
        
        //Fragment 24 (Logical error)
        //Original:     int x24 = 4; double d24 = 5/(x24-2); if (d24 = 2*x24+0.5) cout << "24. Success!\n";
        //Errors:
        //              It runs, but there's a definition in the if-condition
        //              We arrange the condition to ring true
        int x24 = 4;
        double d24 = 5.0 / (x24 - 2);
        if (d24 == x24 / 2 + 0.5)
            cout << "24. Success!\n";
        
        
        //Fragment 25
        //Original:     cin << "25. Success!\n";
        //Error:
        //              no operator "<<" matches these operands
        //Comment:
        //              cin was used instead of cout
        cout << "25. Success!\n";



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