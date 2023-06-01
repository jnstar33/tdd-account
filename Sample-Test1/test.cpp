#include "pch.h"
#include "../tdd-bank/cal.cpp"

using namespace std;

class AcountFixture : public testing::Test
{
public:
	Account account{ 10000 };

};

TEST_F(AcountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}
TEST_F(AcountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}
TEST_F(AcountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}
