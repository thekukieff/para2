#include <iostream>
#include <vector>

class Table {




public:

	Table() :

		price_(21212121),
		article_("e4e5"),
		material_("three"),
		width_(1),
		name_("Игорь Болгарка"),
		high_(12),
		depth_(1),
		count_of_legs_(654),
		color_("Green")



	{}

	float GetVolume()const {
		return width_ * high_ * depth_;
	}

	void Print()const {
		std::cout << "Article: " << GetArticle() << std::endl;
		std::cout << "Color: " << GetColor() << std::endl;
		std::cout << "Depth: " << GetDepth() << std::endl;
		std::cout << "High: " << GetHigh() << std::endl;
		std::cout << "Material: " << GetMaterial() << std::endl;
		std::cout << "Name: " << GetName() << std::endl;
		std::cout << "Width: " << GetWidth() << std::endl;
	}


	Table(int price,
	int count_of_legs,
	float width,
	float high,
	float depth,
	std::string article,
	std::string name,
	std::string material, std::string color) {

		price_ = price;
		count_of_legs_ = count_of_legs;
		width_ = width;
		high_ = high;
		depth_ = depth;
		article_ = article;
		name_ = name;
		material_ = material;
		color_ = color;


	}

	int price()const {
		return price_;
	}

	void price(int newPrice) {
		price_ = newPrice;
	}

	std::string GetMaterial()const{
		return material_;
	}
	void SetMaterial(std::string newMaterial) {
		material_ = newMaterial;
	}
	float GetHigh()const {
		return high_;
	}
	void SetHigh(float newMaterial) {
		high_ = newMaterial;
	}
	float  GetWidth()const {
		return width_;
	}
	void SetWidth(float newMaterial) {
		width_ = newMaterial;
	}
	float GetDepth()const {
		return depth_;
	}
	void SetDepth(float newMaterial) {
		depth_ = newMaterial;
	}

	void SetArticle(std::string newMaterial) {
		article_ = newMaterial;
	}
	std::string GetArticle()const {
		return article_;
	}
	void SetName(std::string newMaterial) {
		name_ = newMaterial;
	}
	std::string GetName()const {
		return name_;
	}
	void SetColor(std::string newMaterial) {
		color_ = newMaterial;
	}
	std::string GetColor()const {
		return color_;
	}
	

private:
	int price_;
	int count_of_legs_;
	float width_;
	float high_;
	float depth_;
	std::string article_;
	std::string name_;
	std::string material_,color_;

};

int main() {

	setlocale(LC_ALL, "ru");
	Table table;
	table.Print();
	std::vector <Table> collection_table;
	collection_table.push_back(table);
	collection_table[0].SetArticle("1123123123123123123");
	collection_table[0].SetMaterial("drevno");
	for (auto el:collection_table )
	{
		el.Print(); std::cout << "\n";
	}

	return 0;
}