# Practice

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


