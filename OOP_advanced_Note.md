# C++ 物件導向(OOP)-封裝與繼承

### 1.封裝

## 資訊隱藏（Information Hiding）

物件導向中的**資訊隱藏**，就是把物件內部不希望外界直接修改的資料藏起來，只提供必要的方法讓外界操作，以保護物件的資料。

通常會把**資料成員設為 `private`**，避免外部程式直接修改；再透過 **`public` 的成員函式**來讀取或修改資料。

這樣做的好處是：**資料的修改必須經過類別提供的函式**，因此可以在函式中加入檢查，避免物件出現不合理的狀態。

### 範例

```cpp
class Person {
private:
    int age;

public:
    void setAge(int value) {
        if (value >= 0) {
            age = value;
        }
    }
};