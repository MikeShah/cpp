// @file defaultArgs.cpp

template<class T1, class T2=int>
void function(T1 arg1, T2 arg2){
    // Function body
}

int main(){
    function<bool>(5,7); // By default, second argument
                        // is treated as an 'int'
    function<bool,bool>(true,false);

    return 0;
}


