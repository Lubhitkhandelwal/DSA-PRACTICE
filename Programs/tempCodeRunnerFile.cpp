rec(char a){
    if(a=='^'){
        return 3;
    }else if(a=='*' || a=='/'){
        return 2;
    }else if(a=='+' || a=='-'){
        return 1;
    }else{
        return -1;
    }
}