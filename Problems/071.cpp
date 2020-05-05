class Solution {
public:
    string simplifyPath(string path) {
            istringstream t_path(path);
    string extract;
    // we can use stack it will make complex solution 
    // so we can use vector to simplify the solution
    vector<string>directories;
    string absolute_path="";
    while(getline(t_path , extract , '/')){
        if(extract=="" or extract==".")
            continue;
        if(extract!="..")/* we have to move a directory up if it is true */{
            directories.emplace_back(extract);
        }else if(!directories.empty()){
            directories.pop_back();
        }
    }
    if(directories.empty()){
        absolute_path = "/";
    }
    for(auto &directory:directories){
        absolute_path+="/"+directory;
    }
    return absolute_path;
    }
};
