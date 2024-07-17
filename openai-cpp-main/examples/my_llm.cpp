#include "openai.hpp"
#include <iostream>
void cityhotlist()
{
    openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself
    auto completion = openai::chat().create(R"(
    {
        "model": "gpt-3.5-turbo",
        "messages": [{"role": "user", "content": "列举热门城市，并以表格形式列出"}],
        "max_tokens": 4096,
        "temperature": 0.5
    }
    )"_json); // Using user-defined (raw) string literals
    //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
    std::cout << "目前合适的实时热门城市有：" << completion["choices"][0]["message"]["content"] << std::endl; 
}
void address(std::string x)
{
    if(x=="厦门")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "厦门的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0.5
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl; 
    }
    else if(x=="北京")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "北京的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "上海")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "上海的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x=="广州")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "广州的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "南京")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "南京的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "武汉")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "武汉的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "成都")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "成都的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "重庆")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "重庆的旅游景点有哪些？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    
}
void weather(std::string x)
{
    if(x=="厦门")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "厦门的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0.5
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl; 
    }
    else if(x=="北京")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "北京的的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "上海")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "上海的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x=="广州")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "广州的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "南京")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "南京的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "武汉")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "武汉的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "成都")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "成都的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "重庆")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "重庆的天气如何？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
}
void delicacies(std::string x)
{
    if(x=="厦门")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "厦门有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0.5
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl; 
    }
    else if(x=="北京")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "北京有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "上海")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "上海有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x=="广州")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "广州有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "南京")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "南京有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "武汉")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "武汉有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "成都")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "成都有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
    else if(x == "重庆")
    {
        openai::start("sk-on-Jo5FAGExsug1vrAvXCQ","",true,"https://agino.me/"); // Will use the api key provided by `OPENAI_API_KEY` environment variable
    // openai::start("your_API_key", "optional_organization"); // Or you can handle it yourself

        auto completion = openai::chat().create(R"(
        {
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "你是一个智能旅游机器人"}],
            "messages": [{"role": "user", "content": "重庆有什么美食？"}],
            "max_tokens": 4096,
            "temperature": 0
        }
        )"_json); // Using user-defined (raw) string literals
        //std::cout << "Response is:\n" << completion.dump(2) << '\n'; 
        std::cout << "Content is:\n" << completion["choices"][0]["message"]["content"] << std::endl;
    }
}
int main() 
{
    while(1)
    {
        int a;
        std::cout<<"------------------------------------"<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"     你好，这里是旅游AI"<<std::endl;
        std::cout<<"     请问你需要什么服务？"<<std::endl;
        std::cout<<"      1.查询旅游城市   "<<std::endl;
        std::cout<<"      2.推荐目前热门旅游城市   "<<std::endl;
        std::cout<<"      3.退出系统" <<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"----------------------------------"<<std::endl;
        std::cin>>a;
        if(a == 1)
        {
            while(1)
            {
            std::cout<<"----------------------------------"<<std::endl;
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"     可供查询的地点如下:"<<std::endl;
            std::cout<<"     厦门 北京 上海 广州"<<std::endl;
            std::cout<<"     南京 武汉 成都 重庆"<<std::endl;
            std::cout<<"     请问你要查询的地点是______"<<std::endl;
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"----------------------------------"<<std::endl;
            std::string x;
            std::cin>>x;
            if(x=="返回上一级") break;
            else
            { 
                while(1)
                {
                    std::cout<<"----------------------------------"<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<"   请问你要查询的是："<<std::endl;
                    std::cout<<"       1.天气"<<std::endl;
                    std::cout<<"       2.景点"<<std::endl;
                    std::cout<<"       3.饮食"<<std::endl;
                    std::cout<<"       4.返回上一级"<<std::endl;
                    std::cout<<"       (输入对应的序号查询相关选项)"<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<"----------------------------------"<<std::endl;
                    int y;
                    std::cin>>y;
                    int isover = 0;
                    switch(y)
                    {
                        case 1:weather(x);break;
                        case 2:address(x);break;
                        case 3:delicacies(x);break;
                        case 4:
                            std::cout<<"----------------------------------"<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<"     可供查询的地点如下:"<<std::endl;
                            std::cout<<"     厦门 北京 上海 广州"<<std::endl;
                            std::cout<<"     南京 武汉 成都 重庆"<<std::endl;
                            std::cout<<"     请问你要查询的地点是______"<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<"----------------------------------"<<std::endl;
                            isover = 1;
                            break;
                    }
                    if(isover == 1) break;
                }
            }
        }
        }
        else if(a == 2)
        {
            cityhotlist();
            std::cout<<std::endl;
        }
        else
        {
            std::cout << "欢迎下次使用" <<std::endl;
            break;
        }     
    }
    return 0;
}
