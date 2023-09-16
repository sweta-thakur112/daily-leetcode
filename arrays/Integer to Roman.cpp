//problem link--https://leetcode.com/problems/integer-to-roman/description
class Solution {
public:
    string intToRoman(int num) {
        string ans="";
      //  map<int,string>m;
      //  m[1]='I';
       // m[2]="II";
       // m[3]="III";
       // m[4]="IV";
       // m[5]='V';
      //  m[9]="IX";
        //m[10]='X';
       // m[40]="XL";
       // m[50]='L';
       // m[90]="XC";
       // m[100]='C';
       // m[400]="CD";
       // m[500]='D';
       // m[900]="CM";
        //m[1000]=;
        while(num)
        {
            if(num>=1000)
            {
                ans+='M';
                num-=1000;
            }
            else if(num>=900)
            {
                ans+="CM";
                num-=900;
            }
            else if(num>=500)
            {
                ans+='D';
                num-=500;
            }
            else if(num>=400)
            {
                ans+="CD";
                num-=400;
            }
            else if(num>=100)
            {
                ans+='C';
                num-=100;
            }
            else if(num>=90)
            {
                ans+="XC";
                num-=90;
            }
            else if(num>=50)
            {
                ans+='L';
                num-=50;
            }
            else if(num>=40)
            {
                ans+="XL";
                num-=40;
            }
            else if(num>=10)
            {
                ans+='X';
                num-=10;
            }
            else if(num>=9)
            {
                ans+="IX";
                num-=9;
            }
            else if(num>=5)
            {
                ans+='V';
                num-=5;
            }
            else if(num>=4)
            {
                ans+="IV";
                num-=4;
            }
            else
            {
               
                ans+='I';
                num--;
            }
        }
        return ans;

    }
};