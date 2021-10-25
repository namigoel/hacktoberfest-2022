#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
class Huffman_algo
{
struct Node
{
char data;
size_t freq;
Node* left;
Node* right;
Node(char data, size_t freq) : data(data), freq(freq), left(NULL), right(NULL)
{}
~Node()
{
delete left;
delete right;
}
};
struct compare
{
bool operator()(Node* l, Node* r)
{
return (l->freq > r->freq);
}
};
Node* top;
void print_Code(Node* root, string str)
{
if(root == NULL)
return;
if(root->data == '$')
{
print_Code(root->left, str + "0");
print_Code(root->right, str + "1");
}

if(root->data != '$')
{
cout << root->data <<" : " << str << "\n";
print_Code(root->left, str + "0");
print_Code(root->right, str + "1");
}
}

public:
Huffman_algo() {};
~Huffman_algo()
{
delete top;
}
void Generate_Huffman_tree(vector<char>& data, vector<size_t>& freq, size_t size)
{
Node* left;
Node* right;
priority_queue<Node*, vector<Node*>, compare > minHeap;

for(size_t i = 0; i < size; ++i)
{
minHeap.push(new Node(data[i], freq[i]));
}

while(minHeap.size() != 1)
{
left = minHeap.top();
minHeap.pop();

right = minHeap.top();
minHeap.pop();

top = new Node('$', left->freq + right->freq);
top->left = left;
top->right = right;
minHeap.push(top);
}
print_Code(minHeap.top(), "");
}
};

int main()
{
int n, h;
char ch;
Huffman_algo set1;
vector<char> data;
vector<size_t> freq;
cout<<"Enter the number of elements: \n";
cin>>n;
cout<<"Enter each element: \n";
for (int i=0;i<n;i++)
{
cin>>ch;
data.insert(data.end(), ch);
}
cout<<"Enter the frequencies \n";
for (int i=0;i<n;i++)
{
cin>>h;
freq.insert(freq.end(), h);
}

size_t size = data.size();
set1.Generate_Huffman_tree(data, freq, size);

return 0;
}
