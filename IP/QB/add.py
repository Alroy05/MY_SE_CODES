# Question No. 1
import xml.etree.ElementTree as ET

tree = ET.parse('sample.xml')
root = tree.getroot()

def count_elements(element):
    count = 1  # Count the current element
    for child in element:
        count += count_elements(child)  # Recursively count child elements
    return count

total_elements = count_elements(root)
print(f"Total number of elements in the XML: {total_elements}")

#Question No.2
import xml.etree.ElementTree as ET

tree = ET.parse("sample.xml")
root = tree.getroot()

search_tag = "name" 
found_elements = root.findall(search_tag)

for element in found_elements:
    print(f"{search_tag}: {element.text}")

#Question No. 3
import xml.etree.ElementTree as ET

tree = ET.parse("sample.xml")
root = tree.getroot()

for element in root:
    if element.tag == "name":
        element.text = "Aaron"
    elif element.tag == "age":
        element.text = "19"

tree.write("sample.xml")
print("XML file updated successfully.")

# Question No. 4
import xml.etree.ElementTree as ET
import json

tree = ET.parse("sample.xml")
root = tree.getroot()

xml_data = {}
for element in root:
    xml_data[element.tag] = element.text

json_data = json.dumps(xml_data, indent=4)

with open("output.json", "w") as json_file:
    json_file.write(json_data)

print("XML to JSON conversion completed and saved to 'output.json'.")

