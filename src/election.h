#include <iostream>
using namespace std;

#ifndef ELECTION_H_
#define ELECTION_H_

class VoteAssistant
{
private:
    // 应参与投票人数
    int num_voters;

    // 大多数得票的票数，比如有5个人参与投票，则majority_size = 3
    int majority_size;

    // 赞成票数
    int yes_votes;

    // 反对票数
    int no_votes;

public:
    // 所有投票者中的最高任期号
    int highest_voter_term;

    // 注册投票
    bool RegisterVote();

    // 判断选举结果是否已经决定
    bool IsDecided();

    // 判断是否所有人都参与投票
    bool AreAllVotesIn();

    // 返回赞成票和反对票的票数
    int GetTotalVotesCounted();

    // 返回应当收到的票数
    int GetTotalExpectedVotes();

    // 返回选举结果
    int ElectionResult();
};


#endif