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
TEST_F(AcountFixture, CompoundInterest) {
	account.applyCompoundInterest(5);
	EXPECT_EQ(10500, account.getBalance());
}
TEST_F(AcountFixture, InterestSetter) {
	account.setInterest(3);
	EXPECT_EQ(3, account.getInterest());
}
TEST_F(AcountFixture, CompoundInterestWithBankInterest) {
	account.setInterest(10);
	account.applyCompoundInterest(10);
	EXPECT_EQ(11000, account.getBalance());
}
TEST_F(AcountFixture, getBalanceAfterNYears) {
	account.setInterest(10);
	account.getBalanceAfterNYears(5);
	EXPECT_EQ(16105, account.getBalance());
}
