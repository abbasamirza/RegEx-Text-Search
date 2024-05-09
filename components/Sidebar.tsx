import { faBars } from "@fortawesome/free-solid-svg-icons";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import React from "react";

const Sidebar = () => {
  return (
    <div>
      <div>
        <nav className="left-0 bottom-0 flex w-1/5 flex-col overflow-y-auto bg-gray-700 sm:max-w-xs lg:w-80">
          <div className="flex px-2 items-center pt-6 pb-8 cursor-pointer text-gray-500 hover:text-white">
            <ul>
              <li className="rounded py-3 px-4 text-gray-50 hover:bg-gray-600">
                <FontAwesomeIcon icon={faBars} className="text-xl" />
                <span className="px-4 text-lg text-white">Menu</span>
              </li>
            </ul>
          </div>
        </nav>
      </div>
    </div>
  );
};

export default Sidebar;
