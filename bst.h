#pragma once
#include<iostream>
using namespace std;
#include<vector>

struct Movie {
	vector<string> actors;
	string title;
	string link;
	string movieType;
	string year;
};
typedef Movie* moviePtr;



#ifndef _BSTREE_H_
#define _BSTREE_H_
typedef int DATA_TYPE; // Type of node�s data

class BinarySearchTree
{
private:
	typedef struct BSTreeNode
	{
		DATA_TYPE data;
		BSTreeNode* leftPtr;
		BSTreeNode* rightPtr;
	} *TreePtr;
	TreePtr rootPtr; // root of the BST
	void InitBSTree()
	{
		rootPtr = NULL;
	}
	void DeleteBST(TreePtr& treePtr);
	void DeleteNode(TreePtr& treePtr, DATA_TYPE val);
	void DeleteNodeItem(TreePtr& treePtr);
	void ProcessLeftMost(TreePtr& treePtr, DATA_TYPE& theItem);
	bool IsLeaf(TreePtr treePtr);
	TreePtr SearchNodeInBST(TreePtr treePtr, DATA_TYPE searchKey);
	void PrintBST_InOrder(TreePtr treePtr);
	void PrintBST_PreOrder(TreePtr treePtr);
	void PrintBST_PostOrder(TreePtr treePtr);
	void PrintBST_BackwardInOrder(TreePtr treePtr, int depth);
public:
	BinarySearchTree() { InitBSTree(); }
	~BinarySearchTree();
	bool IsEmpty()
	{
		return (rootPtr == NULL);
	}
	void AddNode(DATA_TYPE newData);
	void SearchNode(DATA_TYPE searchKey);
	//void DeleteNode(DATA_TYPE val);
	void PrintTree();
	void PrintInOrder();
	void PrintPreOrder();
	void PrintPostOrder();
	void PrintBackwardInOrder();
};
#endif
