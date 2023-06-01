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

	void applyCompoundInterest(int interest)
	{
		balance += (balance * interest * 0.01);
	}

	void setInterest(int userInterest)
	{
		interest = userInterest;
	}
	int getInterest()
	{
		return interest;
	}

	int getBalanceAfterNYears(int n)
	{
		for (int i = 0; i < n; i++) {
			applyCompoundInterest(interest);
		}

		return balance;
	}

private:
	int balance = 10000;
	int interest = 0;
};