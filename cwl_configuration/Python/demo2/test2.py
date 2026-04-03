import sys
from pathlib import Path

# 自动找到项目根目录，把它加到Python的搜索路径里
sys.path.append(str(Path(__file__).parent.parent))

# 现在可以正常导入了
from demo import test1

# 调用函数测试
test1.print_hello()
