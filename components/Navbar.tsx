import Image from "next/image";
import React from "react";

const Navbar = () => {
  return (
    <nav className="bg-gray-800 h-20 flex flex-1 items-center justify-between sticky">
      <div className="px-2 sm:px-6 lg:px-8 flex-shrink-0">
        <Image
          src="/images/icons/logo.png"
          alt="Regex Logo"
          width={135}
          height={20}
          className="invert cursor-pointer"
        />
      </div>
    </nav>
  );
};

export default Navbar;
