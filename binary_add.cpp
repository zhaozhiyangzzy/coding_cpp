class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        int lena=a.size();
        int lenb=b.size();
        
        int p1=lena-1;
        int p2=lenb-1;
        //cout<<"p1="<<p1<<"p2="<<p2;
        int flag=0;
        while((p1>=0) &&(p2>=0)){
            int n1=a[p1]-'0';
            int n2=b[p2]-'0';
            //cout <<"a[p1]="<<a[p1]<<endl;
            //cout <<"n1="<<n1<<"n2="<<n2<<endl;
            int temp=n1+n2+flag;
            //cout<<"temp="<<temp;
            if(temp==3){
                ret="1"+ret;
                flag=1;
            }
            else if(temp==2){
                ret="0"+ret;
                flag=1;
            }
            else if(temp==1){
                ret="1"+ret;
                flag=0;
            }
            else{
                ret="0"+ret;
                flag=0;
            }
            p1--;
            p2--;
        }
        if(p1!=-1){
            //cout<<"p1!=-1";
            while(p1>-1){
                int t=a[p1]-'0';
                int temp=flag+t;
                if(temp==2){
                    ret="0"+ret;
                    flag=1;
                }
                else if(temp==1){
                    ret="1"+ret;
                    flag=0;
                }
                else{
                    ret="0"+ret;
                    flag=0;
                }
                p1--;
            }    
        }
        if(p2!=-1){
            while(p2>-1){
                int t=b[p2]-'0';
                int temp=flag+t;
                if(temp==2){
                    ret="0"+ret;
                    flag=1;
                }
                else if(temp==1){
                    ret="1"+ret;
                    flag=0;
                }
                else{
                    ret="0"+ret;
                    flag=0;
                }
                p2--;
            } 
        }
        //cout<<"flag="<<flag;
        if(flag==1)
            ret="1"+ret;
        return ret;
    }
};
