echo "pb version: " `./protoc-3/bin/protoc --version`
echo "generating pb codes.."

# 输出目录
INCLUDE_PATH=./include
# proto model 目录
PROTO_MODELS_DIR=./proto_models

# 清空输出目录
if [ ! -d $INCLUDE_PATH ] 
then
echo "create dir"
mkdir -p $INCLUDE_PATH
fi
# 清空旧数据
rm -rf $INCLUDE_PATH/*

for file in $PROTO_MODELS_DIR/*; do
    echo $file
    # 拓展名
    file_extension=${file##*.}
    if [ ! $file_extension="proto" ]; then
        break
    fi

    # python
    # ./protoc-3/bin/protoc --python_out=${INCLUDE_PATH} $file
    ./protoc-3/bin/protoc --python_out=./TestCase/python $file
    # cpp
    # ./protoc-3/bin/protoc --cpp_out=${INCLUDE_PATH} $file
    # oc
    ./protoc-3/bin/protoc --objc_out=./TestCase/objectc/NDProtoTest/NDProtoTest $file
    # # java
    # ./protoc-3/bin/protoc --java_out=${INCLUDE_PATH} $file
done

# 拷贝

echo "generate pb codes success.."
