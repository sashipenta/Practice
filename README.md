# Practice Samples for future reference. 

# Java vs C++ : Code snippets

# Java Allocation
```
int[] a = new int[5];
Employee[] staff = new Employee[3];
staff[0] = new Employee();
```

# C++ Allocation
```
int * foo;
foo = new int [5];
```

# Java HashMap
```
HashMap<Character, TrieNode> nodeChildren = new HashMap<Character, TrieNode>();

if (nodeChildren.containsKey(character)) { } 

nodeChildren.put(character, new TrieNode());

nodeChildren.get(character);

for (String key : map.keySet()) {
    // ...
}
```

# C++ unordered_map
```
unordered_map<char, TrieNode*> nodeChildren

if(nodeChildren.find(ch) != nodeChildren.cend()) { }

nodeChildren.insert(make_pair(ch, new TrieNode()))

for (auto& v: nodeChildren)
{
  delete v.second;
}

auto it = nodeChildren.find(ch);
if (it == nodeChildren.cend()) {
    return nullptr;
}
else {
    return it->second;
}
```
# C++ Stack

```
std::stack<int> first;
first.pop();
first.push(5);
```

# C++ sort/algorithm

```
class compare
{
public:
    bool operator() (int a, int b)
    {
        return a > b;
    }
};

main()
{
    vector<int> a = {1, 5, 3};
    
    sort(a.begin(), a.end(), compare());
    sort(a.begin(), a.end(), [](int a, int b) { return a > b; });
}
```

# C++ Parsing sentance to words

```
void parsePhrase(const string& sentence, vector<string>& tokens)
{
    istringstream iss(sentence);

    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         back_inserter(tokens));
}
```
