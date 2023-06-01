class Account{
public:
	explicit Account(int balance)
		: balance(balance)
	{
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

private:
	int balance = 10000;
};