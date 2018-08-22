#ifndef VERIFY_SQUENCE_OF_BST
#define VERIFY_SQUENCE_OF_BST
#include <vector>
using namespace std;
using vsize = vector<int>::size_type;

bool verifySquenceOfBSTCore(vector<int> &sequence, vsize head, vsize end) {
    if (head == end) return true;

    //find middle
    vsize middle = head;
    while (middle != end) {
        if (sequence[middle] < sequence[end]) ++middle;
        else break;
    }

    //check leftChild
    for (auto index = head; index != middle; ++index) {
        if (sequence[index] > sequence[end]) return false;
    }
    //check rightChild
    for (auto index = middle; index != end; ++index) {
        if (sequence[index] < sequence[end]) return false;
    }

	//in case there is no leftChild
	bool left = true;
	if (head < middle) left = verifySquenceOfBSTCore(sequence, head, middle - 1);
	//in case there is no rightChild
	bool right = true;
	if (middle < end) right = verifySquenceOfBSTCore(sequence, middle, end - 1);

    return (left && right);
}

bool verifySquenceOfBST(vector<int> sequence) {
	if (sequence.empty()) return false;
	return verifySquenceOfBSTCore(sequence, 0, sequence.size() - 1);
}
#endif
