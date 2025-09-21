# LeetCode Reviewer

**为基于 VSCode-LeetCode 插件的本地刷题工作流添加自动化代码管理和在线搜索查看功能。通过 GitHub Actions + GitHub Pages，将本地题解转换为可搜索的在线代码库**

> **Update：添加了一个 Luogu_added 分支，该分支会根据 codes 的文件名开头是否包含 P （表示 Luogu 主题库的题号）区分来源，前端 HTML 页面也可以进行相应的筛选（main 分支没有变动，考虑到项目本质是 LeetCode 的 Reviewer）**

---

**工作流：**

代码文件存放于 codes 文件夹（遵循 LeetCode 插件自动生成的文件名）

​	（这个仓库的 `code` 存放了两个测试文件，便于生成正确的 `index.json`）

Github Actions 会在每次仓库更新时更新代码清单（`index.json`）

Github Pages 根据 `index.json` 的内容生成一个静态页面，可以根据关键词搜索查看某一题的代码文件

​	（仓库里有一个 *基于 AI 生成的* `index.html` 可供直接使用，也可以自己基于 `index.json` 的内容自己编写前端页面；该 `index.html` 使用 `prism.js` 作为语法高亮库，只引用了常用的代码语言对应的库，可自行进行增删）

---

**如何使用？**

1. Fork 这个仓库，并且在本地同步一份

    （只需要删除这个README文件和 `images` 文件夹，并且清空 `code` 文件夹放入新的代码文件即可）

2. 使用 VSCode-LeetCode 插件进行做题，将题解文件保存至本地仓库的 `codes` 文件夹

    （每次向 Github 推送更改时，`index.json` 会根据 `code` 文件夹进行同步更新）

3. 记得为仓库配置 Github Pages 

---

效果图：

![image-20250916225651971](images/image-20250916225651971.png)

你可以访问我的 [LeetCode 题解搜索网站](https://leetcode.nopthon.icu/) 看看效果

**欢迎 Fork 使用 ❤**
