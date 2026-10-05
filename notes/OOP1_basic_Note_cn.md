# C++ 物件導向(OOP)－基本觀念

## 一、物件

### 何謂物件

執行環境依照 **類別**（像是說明書）中的宣告，所配置的 **記憶體群組**。

它可以儲存一群資料，而這群資料可以完整地描述一個特定的 **運算單位**。例如：

- 一群可以完整描述一張 **訂單** 的資料
- 一群可以完整描述 **購買者** 的資料
- 一群可以完整描述一件 **商品** 的資料
- 一群可以完整描述 **日期時間** 的資料
- 一群可以完整描述 **信用卡付款** 的資料

也就是說：

> 一個記憶體群組，代表一個特定運算單位的完整資料。這個記憶體群組，我們就稱之為 **物件**。

所以從程式語言的角度也可以說：

> ✅ **物件 = 一群記憶體的集合。**

### 物件擁有什麼

| 成員 | 作用 | 其他常見稱呼 | Java 中的稱呼 |
| --- | --- | --- | --- |
| **資料成員（Data Members）** | 儲存資料（變數） | 屬性、狀態 | 欄位 |
| **成員函式（Member Functions）** | 運算資料 | 行為、能力 | 方法 |

### 為什麼要使用物件導向

在物件導向之前是 **函式導向**。隨著 **運算複雜度的提升**，各語言也逐一支援物件導向。

物件導向與函式導向的基本差異：

> ✅ **物件儲存資料，物件也運算資料。**

| 時期 | 宣告新型別 | 資料與函式的關係 |
| --- | --- | --- |
| 函式導向（C 語言） | `struct` | 結構只是一群資料的集合，本身**沒有運算能力**，只能當參數讓函式運算 → **資料與函式沒有關係** |
| 物件導向（C++） | `class` | 物件除了是一群資料的集合，本身也**具有運算能力** → **資料與函式屬於同一個物件的成員** |

### 相同類別的物件，一定擁有相同的成員

- 相同 **名稱** 的資料成員，但它的 **值** 不見得一樣。
- 相同 **名稱** 的成員函式，但它 **運算的結果** 不一定一樣。

### 每一個物件獨立管理與運算自己的資料

除非有特殊的設計需求，基本上，每個物件都只運算自己的資料。

---

## 二、類別

### 什麼是類別

像 `int` 一樣，是 C++ 中合法的 **型別**。

### 為什麼要開發類別

因為程式有物件的需求，所以 **依照物件的需求開發類別**。

### 類別用來做什麼

- 宣告變數
- 宣告指標
- 宣告參考
- 物件轉型
- 物件識別
- ⭐ **執行環境製作物件的說明書**

### 類別中有什麼

- **物件成員**
  - 物件資料成員
  - 物件成員函式
- **類別成員**
  - 類別資料成員
  - 類別成員函式
- **建構函式**（建構子）
- 其他

---

## 三、物件變數

### 宣告

```cpp
ClassName objectName;
```

變數宣告時，**環境會依照類別中的宣告建立物件**，並把物件的記憶體位址 **指派** 給變數。

### 成員存取

```cpp
objectName.dataMember
objectName.memberFunction()
```

用 **「變數 . 成員」** 的方式存取物件成員。

### 指派

```cpp
objectName = otherObjectName;
```

- 變數和物件是 **綁定** 的：這個變數 **不能再指派另一個物件的記憶體位址**。
- 指派時，是把 `=` 右邊物件的 **資料成員的值**，**複製** 給 `=` 左邊物件的資料成員。

**例：**

```cpp
c1 = c2;  // C++：把 c2 的資料成員的值複製給 c1
```

> ⚠️ **與 Java 的差異**：在 Java 中，`c1 = c2` 是讓 c1 **指向** c2 所指的物件。

### 物件變數參數

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `void function(ClassName objectName)` |
| 呼叫敘述 | `function(objectName);` |

在呼叫敘述的小括號中放物件變數時，是把該物件資料成員的值，**複製** 給函式的物件變數參數。

### 物件變數返回值

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `ClassName function()` |
| 呼叫敘述 | `ClassName objectName = function();` |

---

## 四、物件指標

### 宣告

```cpp
ClassName * pointerName;
// 或
ClassName * pointerName = new ClassName;
```

### 建立物件

```cpp
new ClassName
new ClassName()
```

### 指派

```cpp
pointerName = memory address;
```

**例：**

```cpp
pointerName = new ClassName;      // 指向新建立的物件
pointerName = &objectName;        // 指向既有物件
pointerName = otherPointerName;   // 指向另一個指標所指的物件
```

### 成員存取

```cpp
pointerName->dataMember
pointerName->memberFunction()
```

用 **「指標 -> 成員」** 的方式存取物件成員。

### 物件指標參數

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `void function(ClassName * pointer)` |
| 呼叫敘述 | `function(memory address);` |

### 物件指標返回值

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `ClassName * function()` |
| 呼叫敘述 | `ClassName * pointer = function();` |

---

## 五、物件變數參考

### 宣告

```cpp
ClassName & referenceName = objectName;
```

### 物件變數參考參數

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `void function(ClassName & referenceName)` |
| 呼叫敘述 | `function(objectName);` |

### 物件變數參考返回值

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `ClassName & function(ClassName & referenceName)` |
| 呼叫敘述 | `function(objectName);` |

---

## 六、物件指標參考

### 宣告

```cpp
ClassName *& referenceName = pointerName;
```

### 物件指標參考參數

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `void function(ClassName *& referenceName)` |
| 呼叫敘述 | `function(pointerName);` |

### 物件指標參考返回值

| 項目 | 寫法 |
| --- | --- |
| 函式原型 | `ClassName *& function(ClassName *& referenceName)` |
| 呼叫敘述 | `function(pointerName);` |

---

## 總整理：四種存取物件的方式

| 方式 | 宣告 | 成員存取 | 當參數時 |
| --- | --- | --- | --- |
| 物件變數 | `ClassName obj;` | `obj.member` | 複製資料成員的值 |
| 物件指標 | `ClassName * p;` | `p->member` | 傳遞記憶體位址 |
| 物件變數參考 | `ClassName & r = obj;` | `r.member` | 就是原物件本身（不複製） |
| 物件指標參考 | `ClassName *& rp = p;` | `rp->member` | 就是原指標本身（可改變它指向哪裡） |
