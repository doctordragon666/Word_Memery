# Word Memory

Word Memory 是一个用于记单词的命令行程序。它可以让你在终端中输入单词、解释和例句，并将其保存到本地文件中，以便后续查看和编辑。你还可以通过查询已保存的单词来进行复习。

## 安装

1. 克隆本仓库到本地。

   ```
   git clone https://github.com/doctordragon666/Word_Memery.git
   ```

2. 用visual stdio打开项目文件，点击sln文件，点击运行即可

3. 编译完成后，可以在 `x64` 目录下找到可执行文件 `WordMemery`。

## 用法

在进入程序后，命令行会显示如何使用

## 类图

以下是本项目的类图：

``` mermaid
classDiagram
    class WordDB {
      +insert_word(const std::string& word, const std::string& meaning, const std::string& example) : bool
      +query_word(const std::string& word) : std::tuple<std::string, std::string, std::string>
      +update_word(const std::string& word, const std::string& meaning, const std::string& example) : bool
      +delete_word(const std::string& word) : bool
      +list_words() : std::vector<std::string>
      +clear_words() : bool
    }
    class Word {
      -word : std::string
      -meaning : std::string
      -example : std::string
      +Word(const std::string& word, const std::string& meaning, const std::string& example)
      +get_word() : std::string
      +get_meaning() : std::string
      +get_example() : std::string
      +set_meaning(const std::string& meaning)
      +set_example(const std::string& example)
      +to_string() : std::string
    }
    WordDB -- Word
    class WordMenu {
      -db : WordDB&
      +show_menu() : void
      +add_word() : bool
      +query_word() : bool
      +edit_word() : bool
      +delete_word() : bool
      +list_words() : bool
      +clear_words() : bool
    }
    WordMenu -- WordDB
    class Console {
      +get_input(const std::string& prompt) : std::string
      +print(const std::string& message) : void
      +print_error(const std::string& message) : void
    }
    WordMenu -- Console
    Console -- WordDB
```

其中，`Word` 类表示一个单词和其相关信息，`WordDB` 类表示单词库数据库（即 `word_db.db` 文件），`WordMenu` 类表示命令行菜单，`Console` 类表示控制台输入输出。
