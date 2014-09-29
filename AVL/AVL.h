#ifdef AVL_H
#define AVL_H

#include <stddef.h>
template <class KType>
class Node{
	private:
                Comparable<KType> *data;
                Node<KType> *s_tree[MAX_SUB_TREES];
                int balance_factor;
                static int rotate_twice(Node<KType>* &root, bool is_dirty);
                static int rotate_once(Node<KType>* &root,bool is_dirty);
                static Comparable<KType> * insert(Comparable<KType> *item, Node<KType> *&root,int &change);
                static Comparable<KType> *delete(KType key, Node<KType>*& root, int &change);
        public:
               	static const int MAX_SUBTREES=2;
                static bool is_dirty = 0;
                Node(Comparable<KType> *item = NULL);
                virtual ~Node();
                Comparable<KType> * data() const{
                        return data;}
        };
template class<KType>
class AVLTree{
	private:
                AVLTree(const AVLTree<KType>&);
                AVLTree& operator=(const AVLTree<KType>&);
                AVLTree<KType> *root;
        public:
                AVLTree(): root(NULL){};
                ~AVLTree(){if(root) delete root;}
                int is_empty() const{
                        return (root == NULL);
                }
                Comparable<KType> *search(KType key){
        }
};
