#pragma once

#include <string>
#include <vector>
#include <list>

#include "CMarkPoint.hpp"

class CFile
{
private:
	//Private variables
	std::string m_path;

public:
	//CFile constructors
	CFile(std::string f_path);
	CFile();

	//Getters
	std::string getPath();
	//Setters
	void setPath( std::string f_path );

	//Methods
	void fileNamesByExtension(std::string f_extension, std::vector< std::string >& f_file_names);

	void readJson(const std::vector< std::string >& f_file_names, std::list< CMarkPoint >& f_mark_point_list);
	void writeCSV(const std::string& f_filename, cv::Mat& f_m);
	void readCSV(cv::Mat& f_m);

	void readBmp(const std::vector< std::string >& f_file_names, std::list< CMarkPoint >& f_mark_point_list);
	void readBmp(const std::vector< std::string >& f_file_names, std::list< cv::Mat >& f_image_list);

	void makePositiveTrainingSet(std::list< CMarkPoint >& f_mark_point_list);
	void makeNegativeTrainingSet(std::list< cv::Mat >& f_image_list);

};

