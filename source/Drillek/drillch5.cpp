  #include "std_lib_facilities.h"
int main()
try {
	/*1*/cout << "Success!\n";
        /*2*/cout << "Success!\n";
       /*3*/cout << "Success" << "!\n";
       /*4*/ cout << "Success" << "!\n";
       /*5*/int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
       /*6*/vector<int> v1(10);
        v1[5] = 7;
        if (v1[5]!=6) 
        cout << "Success!\n"; 
       /*7*/bool cond=true;
        if (cond) 
       cout << "Success!\n"; 
       else 
       cout << "Fail!\n";
       /*8*/bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; 
       /*9*/string s = "ape"; bool c1 = "fool">s; if (c1) cout << "Success!\n";
       /*10*/string s1 = "fool"; if (s1=="fool") cout << "Success!\n";
       /*11*/string s2 = "fool"; if (s2=="fool") cout << "Success!\n";
       /*12*/string s3 = "ape"; if (s3=="ape") cout << "Success!\n"; 
       /*13*/vector<char> v2(1); for (int i=0; i<v2.size(); ++i)  cout << "Success!\n"; 
       /*14*/ vector<char> v3(1); for (int i=0; i<v3.size(); ++i) cout << "Success!\n";
       /*15*/string s4 = "Success!\n"; for (int i=0; i<1; ++i) cout << s4;
       /*16*/if (true) cout << "Success!\n"; else cout << "Fail!\n";
       /*17*/int x = 2000; char c4 = x; if (c4==2000) cout << "Success!\n";
       /*18*/string s5 = "Success!\n"; for (int i=0; i<1; ++i) cout << s5;
       /*19*/vector<char> v5(1); for (int i=0; i<v5.size(); ++i)  cout << "Success!\n";
       /*20*/int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
       /*21*/double x1 = 2; double d1 = 5/x1; if (d1==x1+0.5) cout << "Success!\n"; 
       /*22*/string s6 = "Success!\n"; for (int i=0; i<1; ++i) cout << s6;
       /*23*/int i1=0,j1=9; while (i1<10) ++i1; if (j1<i1) cout << "Success!\n";
       /*24*/double x5 = 4; double d5 = 5/(x5-2); if (d5==x5/2+0.5) cout << "Success!\n";
       /*25*/cout << "Success!\n";
keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
  
