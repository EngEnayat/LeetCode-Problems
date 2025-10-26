class Bank {
public:
    Bank(vector<long long>& balance) {
        n = balance.size();
        for(int i=0; i<n; i++)   
            dbs[i+1] = balance[i];
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(!dbs.count(account1) || dbs[account1] < money || !dbs.count(account2)) return false;
        dbs[account2] += money;
        dbs[account1] -= money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(!dbs.count(account)) return false;
        dbs[account] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if( !dbs.count(account) || dbs[account] < money) return false;
        dbs[account] -= money;
        return true;
    }
private:
    unordered_map<int,long long> dbs;
    int n;
};




            // second solution


/*

class Bank {
public:
    Bank(vector<long long>& balance) : v(balance) {
        n = balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(!Valid(account1, money) || !Valid(account2, INT_MIN)) return false;
        v[account2-1] += money;
        v[account1-1] -= money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(account-1 <0 || account-1 >= n) return false;
        v[account-1] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(!Valid(account, money)) return false;
        v[account-1] -= money;
        return true;
    }
private:
    bool Valid(int account, long long money)
    {
        if((account-1) < 0 || (account-1) >= n) return false;
        return v[account-1] >= money;
    }
    vector<long long> v;
    int n;
};


*/